#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

int binary_search(int nums[], int length, int target){

    int low, mid, upper;
    low = 0;
    upper = length-1;

    while(low <= upper){

        mid = (int)((upper+low)/2);

        // solution case
        if(nums[mid]==target){
            return mid;
        }
        // keep left half
        else if(nums[mid] > target){
            upper = mid-1;
        }
        // keep right half
        else if(nums[mid] < target){
            low = mid+1;
        }
    }

    return -1;
}






int main(){

    int nums[] = {-1, 3, 5, 6, 7, 8, 20};

    int target = 5;
    int index;


    index = binary_search(nums, 7, target);
    cout << target << " found at index: " << index << endl;

    return 0;
}
