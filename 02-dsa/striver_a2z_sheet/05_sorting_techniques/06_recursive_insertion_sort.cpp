// Algorithm: Recursive Insertion Sort

// Approach:
// Consider the first element as sorted.
// Recursively process one element at a time.
// For each recursive call, insert the current element into its correct
// position within the already sorted left portion by shifting it left
// through adjacent swaps.
// Continue until all elements have been processed.

// Time Complexity: 
// Best Case Time Complexity: O(n) (array is already sorted)
// Average Case Time Complexity: O(n²)
// Worst Case Time Complexity: O(n²)

// Space Complexity: O(n) (recursive call stack) 

#include<iostream>

void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

}

void recursive_insertion_sort(int arr[], int i, int arr_size){

    if(i == arr_size) return;

    int j = i;

    while(j>0 && arr[j-1]>arr[j]){

        int temp = arr[j-1];

        arr[j-1] = arr[j];

        arr[j] = temp;

        j--;

    }

    recursive_insertion_sort(arr, i+1, arr_size);

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

    std::cout<<"Before Insertion Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    recursive_insertion_sort(arr, 0, arr_size);

    std::cout<<"After Insertion Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}



