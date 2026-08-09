// Algorithm: Left Rotate Array by One Position

// Approach:
// Store the first element of the array in a temporary variable.
// Shift every remaining element one position to the left.
// Place the stored first element at the last position.
// This rotates the array to the left by one position.

// Time Complexity: O(n) (all elements are shifted once)
// Space Complexity: O(1) (only one temporary variable is used)

#include <bits/stdc++.h>

int main(){

    int arr_size;

    std::cout<<"Enter size of array: ";
    std::cin>>arr_size;

    std::vector<int> arr(arr_size);

    std::cout<<"Enter elements of array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cin>>arr[i];

    }

    std::cout<<"Array Before Rotation: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    if(arr_size <= 1) return 0;

    int temp = arr[0];

    for(int i=0; i<arr_size-1; i++){

        arr[i] = arr[i+1];

    }

    arr[arr_size-1] = temp;

    std::cout<<"Array After Rotation: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}

