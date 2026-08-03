// Algorithm: Quick Sort (Descending)

// Approach:
// Choose the first element as the pivot.
// Partition the array such that all elements greater than or equal to the pivot
// are placed on its left, and all smaller elements are placed on its right.
// The pivot is then placed in its correct sorted position.
// Recursively apply the same process to the left and right subarrays
// until the entire array is sorted in descending order.

// Time Complexity:
// Best Case & Average Case: O(n log n)
// Worst Case Time Complexity: O(n²) (pivot is always the smallest or largest element)

// Space Complexity: O(log n) (recursive call stack in best/average case) and O(1) (ignoring recursive call stack)

#include<iostream>
#include<vector>

int partition(std::vector<int> &arr, int low, int high){

    int pivot = arr[low];

    int i = low, j = high;

    while(i<j){

        while(arr[i]>=pivot && i<=high-1){
            
            i++;

        }

        while(arr[j]<pivot && j>=low+1){

            j--;

        }

        if(i < j){

            std::swap(arr[i], arr[j]);

        }

    }

    std::swap(arr[low], arr[j]);

    return j;
    
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



