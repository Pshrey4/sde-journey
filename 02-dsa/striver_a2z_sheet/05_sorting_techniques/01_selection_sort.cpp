// Algorithm: Selection Sort

// Approach:
// Traverse the array from the first element to the second last element.
// Assume the current index has the minimum element.
// Search the remaining unsorted portion of the array to find the actual minimum element.
// Swap the minimum element with the current element.
// Repeat until the entire array is sorted.

// Time Complexity: 
// Best Case: O(n²)
// Average Case: O(n²)
// Worst Case: O(n²)
// (Selection Sort always performs the same number of comparisons regardless of input.)

// Space Complexity:
// O(1) (It sorts the array in-place using only one temporary variable.)

#include<iostream>

void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

}

void selection_sort(int arr[], int arr_size){

    for(int i=0; i<arr_size-1; i++){

        int min = i;

        for(int j=i; j<arr_size; j++){

            if(arr[j] < arr[min]){

                min = j;

            }

        }

        swap(arr[i], arr[min]);

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

    std::cout<<"Before Selection Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    selection_sort(arr, arr_size);

    std::cout<<"After Selection Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}

// Learnings:
// 1. Arrays are passed by reference (actually as a pointer to the first element) in C++.
//    So passing int arr[] does NOT create a copy of the entire array.
//    Any modifications inside the function affect the original array.
// 2. Individual variables (int, float, etc.) are passed by value by default.
//    Therefore, my swap(int a, int b) function was only swapping copies.
// 3. To modify the original variables, pass them by reference using '&'.
//    Correct:
//        void swap(int &a, int &b)
// 4. Selection Sort is an in-place sorting algorithm because it swaps
//    elements within the original array and uses only constant extra space.
