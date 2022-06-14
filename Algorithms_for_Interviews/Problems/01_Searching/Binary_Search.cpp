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


// find the first instance of a number larger than k in a sorted array
int bin_search_larger_than(int nums[], int k, int length){

    int lower, mid, upper;
    lower = 0;
    upper = length-1;

    // check to see if last element is less than k, which
    // implies that there is no element in the list larger than k
    if(nums[upper] <= k){
        return -1;
    }

    // check to see if the first element is larger than k
    // skips binary search
    if(nums[lower] > k){
        return lower;
    }


    while(lower <= upper){

        mid = (int)((upper+lower)/2);

        if(nums[mid] > k){

            // if nums[mid] > k and nums[mid-1] <= k
            // then k is the index of first larger than k
            if(nums[mid-1] <= k){
                return mid;
            }
            // keep the left half of the array
            else{
                upper = mid-1;
            }
        }
        // if nums[mid] <= k
        else{

            if(nums[mid+1]>k){
                return (mid+1);
            }
            // keep right half of array
            else{
                lower = mid+1;
            }
        }

    }


    return mid;
}





int main(){

    int nums[] = {-1, 3, 5, 6, 7, 8, 20};

    int target = 5;
    int index;

    cout << "Testing array is";
    for(int i = 0; i < 7; i ++){
        cout << " " << nums[i];
    }
    cout << endl;

    index = binary_search(nums, 7, target);
    cout << target << " found at index: " << index << endl;

    index = bin_search_larger_than(nums, target, 7);
    cout << "Index of first element larger than " << target << " is " << index << endl; 


    return 0;
}
