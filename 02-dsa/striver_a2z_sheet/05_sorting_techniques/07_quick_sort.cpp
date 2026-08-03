// Algorithm: Quick Sort

// Time Complexity:
// Best Case & Average Case: O(n log n)
// Worst Case Time Complexity: O(n²) (pivot is always the smallest or largest element)

// Space Complexity: O(log n) (recursive call stack in best/average case) and O(1) (ignoring recursive call stack)

#include<iostream>
#include<vector>

// Method 1: Hoare Partition Implementation

// Approach:
// Choose the first element as the pivot.
// Use two pointers: one starting from the left and the other from the right.
// Move the left pointer until an element greater than the pivot is found.
// Move the right pointer until an element smaller than or equal to the pivot is found.
// If the pointers have not crossed, swap the two elements.
// Repeat until the pointers cross.
// Finally, place the pivot in its correct sorted position by swapping it
// with the right pointer.
// Recursively apply the same process to the left and right subarrays.

// int partition(std::vector<int> &arr, int low, int high){

//     int pivot = arr[low];

//     int i = low, j = high;

//     while(i<j){

//         while(arr[i]<=pivot && i<=high-1){
            
//             i++;

//         }

//         while(arr[j]>pivot && j>=low+1){

//             j--;

//         }

//         if(i < j){

//             std::swap(arr[i], arr[j]);

//         }

//     }

//     std::swap(arr[low], arr[j]);

//     return j;
    
// }

// Method 2: Lomuto Partition Implementation

// Approach:
// Choose the last element as the pivot.
// Maintain an index i to track the boundary of elements smaller than the pivot.
// Traverse the array from low to high-1.
// Whenever an element smaller than the pivot is found,
// increment i and swap the current element with arr[i].
// After the traversal, place the pivot in its correct sorted position
// by swapping it with arr[i+1].
// Recursively apply the same process to the left and right subarrays.

int partition(std::vector<int> &arr, int low, int high){

    int pivot = arr[high];

    int i = low - 1;

    for(int j = low; j < high; j++){

        if(arr[j] < pivot){

            i++;

            std::swap(arr[i], arr[j]);

        }

    }

    std::swap(arr[i + 1], arr[high]);

    return i + 1;

}

void quick_sort(std::vector<int> &arr, int low, int high){

    if(low < high){

        int pindex = partition(arr, low, high);

        quick_sort(arr, low, pindex-1);

        quick_sort(arr, pindex+1, high);

    }

}

int main(){

    int arr_size;

    std::cout<<"Enter size of vector: ";
    std::cin>>arr_size;

    std::vector<int> arr(arr_size);

    std::cout<<"Enter elements of vector: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cin>>arr[i];

    }

    std::cout<<"Before Quick Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    int low = 0, high = arr_size - 1;

    quick_sort(arr, low, high);

    std::cout<<"After Quick Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}



