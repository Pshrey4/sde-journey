// Algorithm: Longest Subarray with given Sum K (Positives)

// Approach:
// Use the sliding window technique with two pointers, left and right.
// Maintain the sum of the current window [left, right].
// Expand the window by moving right forward.
// If the sum becomes greater than K, shrink the window from the left
// until the sum is less than or equal to K.
// Whenever the sum equals K, update the maximum subarray length.
// This approach works because all array elements are positive.

// Time Complexity: O(n) (each element is added and removed from the window at most once)
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

    int k;

    std::cout<<"Enter K: ";
    std::cin>>k;

    int left = 0, right = 0;

    int maxLen = 0;

    long long sum = arr[0];

    while(right < arr_size){

        while(left <= right && sum > k){

            sum -= arr[left];

            left++;

        }

        if(sum == k){

            maxLen = std::max(maxLen, right-left+1);

        }

        right++;

        if(right < arr_size){

            sum += arr[right];

        }

    }

    std::cout<<"Maximum Subarray Length: "<<maxLen<<std::endl;
    
    return 0;

}

