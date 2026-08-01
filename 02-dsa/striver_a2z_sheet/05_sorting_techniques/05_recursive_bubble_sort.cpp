// Algorithm: Recursive Bubble Sort

#include<iostream>

// Method 1: Brute Force Approach

// Approach:
// Perform one pass of Bubble Sort by comparing adjacent elements
// and swapping them if they are in the wrong order.
// After each pass, the largest element moves to its correct position.
// Recursively sort the remaining unsorted part of the array
// by reducing the array size by one.
// Continue until only one element remains.

// Time Complexity: O(n²)
// Space Complexity: O(n) (recursive call stack)

// void recursive_bubble_sort(int arr[], int arr_size){

//     if(arr_size == 1) return;

//     for(int i=0; i<arr_size-1; i++){

//         if(arr[i] > arr[i+1]){
            
//             int temp = arr[i];

//             arr[i] = arr[i+1];

//             arr[i+1] = temp;
//         }

//     }

//     recursive_bubble_sort(arr, arr_size-1);    

// }

//Method 2: Optimal Approach

// Approach:
// Perform one pass of Bubble Sort by comparing adjacent elements
// and swapping them if they are in the wrong order.
// Keep track of whether any swap occurs during the current pass.
// If no swaps occur, the array is already sorted, so terminate early.
// Otherwise, recursively sort the remaining unsorted part
// by reducing the array size by one.
// Continue until the array is sorted or only one element remains.

// Best Case Time Complexity: O(n) (no swaps in the first pass)
// Average Case Time Complexity: O(n²)
// Worst Case Time Complexity: O(n²)
// Space Complexity: O(n) (recursive call stack)

void recursive_bubble_sort(int arr[], int arr_size){

    if(arr_size == 1) return;

    int didSwap = 0;

    for(int i=0; i<arr_size-1; i++){

        if(arr[i] > arr[i+1]){
            
            int temp = arr[i];

            arr[i] = arr[i+1];

            arr[i+1] = temp;

            didSwap = 1;
        }

    }

    if(didSwap == 0) return;

    recursive_bubble_sort(arr, arr_size-1);    

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

    recursive_bubble_sort(arr, arr_size);

    std::cout<<"After Bubble Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}


