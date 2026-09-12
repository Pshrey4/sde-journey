// Algorithm: Print Subarray with Maximum Subarray Sum

// Approach:
// Use Kadane's Algorithm while tracking the starting and ending indices of the subarray producing the maximum sum.
// Maintain the current subarray sum and its starting index.
// If the current sum becomes 0, mark the current index as a possible starting point.
// Whenever the current sum becomes greater than the maximum sum, update the maximum sum and store the current subarray boundaries.
// If the current sum becomes negative, reset it to 0 since it cannot contribute positively to a future subarray.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (only constant extra variables are used) 

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

    std::cout<<"Array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    int maxSum = INT_MIN;

    int sum = 0;

    int subarrayStart = -1;

    int subarrayEnd = -1;

    int start = 0;

    for(int i=0; i<arr_size; i++){

        if(sum == 0){
            start = i;
        }

        sum += arr[i];

        if(sum > maxSum){
            maxSum = sum;

            subarrayStart = start;

            subarrayEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    std::cout<<"Subarray with maximum sum: "<<std::endl;

    for(int i=subarrayStart; i<=subarrayEnd; i++){
        std::cout<<arr[i]<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"Sum: "<<maxSum<<std::endl;    

    return 0;

}

