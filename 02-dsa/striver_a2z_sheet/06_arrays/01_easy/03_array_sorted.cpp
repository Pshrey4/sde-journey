// Algorithm: Check if Array is Sorted

// Approach:
// Traverse the array from left to right.
// Compare each element with its next element.
// If any element is greater than the next element,
// the array is not sorted, so return false.
// If all adjacent elements are in non-decreasing order,
// return true after completing the traversal.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>

bool array_sorted(std::vector<int> &arr, int arr_size){

    for(int i=0; i<arr_size-1; i++){

        if(arr[i] > arr[i+1]){

            return false;

        }

    }

    return true;

}

int main(){

    int arr_size;

    std::cout<<"Enter size of array: ";
    std::cin>>arr_size;

    std::vector<int> arr(arr_size);

    std::cout<<"Enter elements of array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cin>>arr[i];

    }

    std::cout<<"Array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    bool sorted = array_sorted(arr, arr_size);

    if(sorted){

        std::cout<<"Array is sorted."<<std::endl;

    }
    else{

        std::cout<<"Array is unsorted."<<std::endl;

    }

    return 0;

}

// Alternative Approach:
// Compare every element with all the elements after it.
// If any earlier element is greater than a later element,
// the array is not sorted.
// Otherwise, the array is sorted.
// Time Complexity: O(n²)
// Space Complexity: O(1)