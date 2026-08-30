// Algorithm: Longest Subarray with Zero Sum

// Approach:
// Use prefix sum and an unordered_map to store the first occurrence
// of each prefix sum.
// Traverse the array while maintaining the current prefix sum.
// If the prefix sum becomes 0, the subarray from index 0 to i has sum 0.
// If the current prefix sum has appeared before, the elements between
// the previous occurrence and the current index have sum 0.
// Calculate the length of this subarray and update the maximum length.
// Store only the first occurrence of each prefix sum to maximize the length.

// Time Complexity: O(n) (unordered_map operations take O(1) on average)
// Space Complexity: O(n) (unordered_map stores prefix sums)

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

    std::unordered_map<long long, int> presum;

    long long sum = 0;

    int max_len = 0;

    for(int i=0; i<arr_size; i++){

        sum += arr[i];

        if(sum == 0){

            max_len = i+1;

        }
        else if(presum.find(sum) != presum.end()){

            max_len = std::max(max_len, i-presum[sum]);

        }
        else{

            presum[sum] = i;

        }

    }

    std::cout<<"Maximum Length Subarray: "<<max_len<<std::endl;
    
    return 0;

}

