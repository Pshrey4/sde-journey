// Algorithm: Remove Duplicates from Sorted Array

// Use two pointers to modify the array in-place.
// Keep i at the position of the last unique element.
// Use j to scan the array from left to right.
// Whenever arr[j] is different from arr[i], move i forward
// and place arr[j] at the new position.
// Continue until j reaches the end of the array.
// The first i + 1 elements of the array now contain all unique elements.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1)

#include <bits/stdc++.h>

int remove_duplicates(std::vector<int> &arr, int arr_size){

    int i = 0, j = 1;

    while(j < arr_size){

        if(arr[j] != arr[i]){

            i++;

            arr[i] = arr[j];

        }

        j++;

    }

    return i + 1;

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

    int unique = remove_duplicates(arr, arr_size);

    std::cout<<"Unique Elements: "<<unique<<std::endl;

    return 0;

}

// Alternative Approach:
// Insert all elements into a set, which automatically stores
// only unique elements.
// The size of the set gives the number of unique elements.
// Time Complexity: O(n log n) (set insertion takes O(log n) for each element)
// Space Complexity: O(n) (set stores the unique elements)

// Learning:
// Since the array is already sorted, duplicate elements are adjacent.
// This allows us to remove duplicates using the two-pointer technique
// without requiring any extra data structure.
