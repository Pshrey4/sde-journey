// Algorithm: Linear Search

// Approach:
// Traverse the array from left to right.
// Compare each element with the target number.
// If the target is found, return its index.
// If the entire array is traversed without finding the target, return -1.

// Time Complexity: O(n) (in the worst case, the entire array is traversed)
// Space Complexity: O(1) 

#include <bits/stdc++.h>

int linear_search(std::vector<int> &arr, int arr_size, int num){

    for(int i=0; i<arr_size; i++){

        if(arr[i] == num){

            return i;

        }

    }

    return -1;

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

    int num;

    std::cout<<"Enter number: ";
    std::cin>>num;

    int found = linear_search(arr, arr_size, num);

    if(found >= 0){

        std::cout<<"Element found at position: "<<found<<std::endl;

    }
    else{

        std::cout<<"Element not found"<<std::endl;

    }
    
    return 0;

}

