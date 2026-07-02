// Algorithm: Insertion Sort

// Approach:
// Consider the first element as already sorted.
// Starting from the second element, pick one element (the key) at a time.
// Compare it with the elements in the sorted portion on its left.
// Keep moving the element left until it reaches its correct position.
// Repeat this process until all elements are placed in their correct positions.

// Time Complexity: 
// Best Case: O(n) (When the array is already sorted. Only one comparison is made for each element.)
// Average Case: O(n²)
// Worst Case: O(n²) (When the array is sorted in reverse order, every element has to be moved to the beginning.)

// Space Complexity: O(1) (Insertion Sort is an in-place sorting algorithm and uses constant extra space.)

#include<iostream>

void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

}

void insertion_sort(int arr[], int arr_size){

    for(int i=0; i<arr_size; i++){

        int j = i;

        while(j>0 && arr[j-1] > arr[j]){

            swap(arr[j-1], arr[j]);

            j--;

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

    std::cout<<"Before Insertion Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    insertion_sort(arr, arr_size);

    std::cout<<"After Insertion Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}



