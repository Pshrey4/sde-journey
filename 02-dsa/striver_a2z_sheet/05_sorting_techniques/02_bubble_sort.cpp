// Algorithm: Bubble Sort

// Approach:
// Traverse the array multiple times.
// In each pass, compare every pair of adjacent elements.
// If the left element is greater than the right element, swap them.
// After every pass, the largest element moves ("bubbles up") to its correct position at the end.
// Repeat for the remaining unsorted portion of the array.
// If no swaps occur during a pass, the array is already sorted, so terminate early.

// Time Complexity: 
// Best Case: O(n) (When the array is already sorted. The didSwap flag prevents unnecessary passes.)
// Average Case: O(n²)
// Worst Case: O(n²) (When the array is sorted in reverse order.)

// Space Complexity:O(1) (Bubble Sort is an in-place sorting algorithm and uses only constant extra space.)

#include<iostream>

void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

}

void bubble_sort(int arr[], int arr_size){

    for(int i=arr_size-1; i>=1; i--){

        bool didSwap = false;

        for(int j=0; j<i; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);
                didSwap = true;

            }

        }

        if(!didSwap){

            break;

        }

    }    

}

int main(){

    int arr_size;

    std::cout<<"Enter size of array: ";
    std::cin>>arr_size;

    int arr[arr_size];

    std::cout<<"Enter elements of array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cin>>arr[i];

    }

    std::cout<<"Before Bubble Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    bubble_sort(arr, arr_size);

    std::cout<<"After Bubble Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}

// Learnings:
// 1. Using a 'didSwap' flag optimizes Bubble Sort.
//    If no swaps occur in a pass, the array is already sorted,
//    allowing early termination and reducing the best-case time complexity
//    from O(n²) to O(n).
// 2. Bubble Sort is a stable sorting algorithm because equal elements
//    do not change their relative order during sorting.

