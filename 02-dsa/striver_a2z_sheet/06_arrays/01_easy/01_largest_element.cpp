// Algorithm: Largest Element

// Approach:
// Assume the first element is the largest.
// Traverse the array from left to right.
// If the current element is greater than or equal to the largest element,
// update the largest element.
// After traversing the entire array, return the largest element.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include<vector>

int largest_element(std::vector<int> &arr, int arr_size){

    int max = arr[0];

    for(int i=0; i<arr_size; i++){

        if(arr[i] >= max){

            max = arr[i];
        }

    }

    return max;

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

    int max = largest_element(arr, arr_size);

    std::cout<<"Largest Element: "<<max<<std::endl;

    return 0;

}

// Alternative Approach:
// Sort the array in ascending order.
// After sorting, the last element is the largest.
// Return the last element.
// Time Complexity: O(n log n)
// Space Complexity: O(1)



