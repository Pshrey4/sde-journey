// Algorithm: Merge Sort

// Approach:
// Divide the array into two halves until each subarray contains only one element.
// Recursively sort the left half.
// Recursively sort the right half.
// Merge the two sorted halves by comparing elements and storing them in a temporary vector.
// Copy the merged elements back to the original array.
// Repeat until the entire array is sorted.

// Time Complexity:
// Best Case: O(n log n)
// Average Case: O(n log n)
// Worst Case: O(n log n)
// The array is divided into log₂n levels.
// At each level, all n elements are merged once.
// Therefore, Total Time = O(n × log n).

// Space Complexity: O(n)
// A temporary vector is used during merging to store elements.
// The recursion stack takes O(log n) space.
// Overall auxiliary space is O(n) because O(n) dominates O(log n).

#include<iostream>
#include<vector>

void merge(std::vector<int> &arr, int low, int mid, int high){

    int left = low;

    int right = mid+1;

    std::vector<int> temp;

    while(left <= mid && right <= high){

        if(arr[left] <= arr[right]){

            temp.push_back(arr[left]);

            left++;

        }
        else{

            temp.push_back(arr[right]);

            right++;

        }

    }

    while(left <= mid){

        temp.push_back(arr[left]);

        left++;

    }

    while(right <= high){

        temp.push_back(arr[right]);

        right++;

    }

    for(int i=low; i<=high; i++){

        arr[i] = temp[i-low];

    }
    
}


void merge_sort(std::vector<int> &arr, int low, int high){

    if(low == high) return;
    
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);

    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);

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

    std::cout<<"Before Merge Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    int low = 0, high = arr_size - 1;

    merge_sort(arr, low, high);

    std::cout<<"After Merge Sort: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}



