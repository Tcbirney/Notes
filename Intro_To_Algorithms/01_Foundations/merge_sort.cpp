#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;



vector<int> merge(vector<int> left, vector<int> right){

    vector<int> merged;
    vector<int>::iterator leftIt = left.begin();
    vector<int>::iterator rightIt = right.begin();


    while(leftIt != left.end() && rightIt != right.end()){

        if(*leftIt < *rightIt){
            merged.push_back(*leftIt);
            leftIt++;
        }
        else{
            merged.push_back(*rightIt);
            rightIt++;
        }
    }

    // still values in left array present
    // push it back onto 
    if(leftIt != left.end() && rightIt == right.end()){
        while(leftIt != left.end()){
            merged.push_back(*leftIt);
            leftIt++;
        }
    }

    if(leftIt == left.end() && rightIt != right.end()){
        while(rightIt != right.end()){
            merged.push_back(*rightIt);
            rightIt++;
        }
    }

    return merged;
}



vector<int> mergeSort(vector<int> nums){

    // end case
    if(nums.size() == 1){
        return nums;
    }

    // if not one, the we need to split sort and merge recursively
    int mid = (int)(nums.size()/2);

    vector<int> left;
    vector<int> right;

    // get the first half
    vector<int>::iterator it = nums.begin();
    for(int i = 0; i < mid; i++){
        left.push_back(*it);
        it++;
    }

    // the rest of the items past the midpoint goes in the right half
    while(it != nums.end()){
        right.push_back(*it);
        it++;
    }

    // sort each half untill we get to the base case
    left = mergeSort(left);
    right = mergeSort(right);

    // merge the sorted halfs, to go back up the call stack
    nums = merge(left, right);

    return nums;
}



int main(){

    vector<int> unsorted{3, 1, 5, 2, 6, 4, 8, 10, 9, 7};
    vector<int> sorted = mergeSort(unsorted);

    for(int i: sorted){
        cout << i << " ";
    }


    return 0;
}