// Algorithm: Longest Subarray with given Sum K 

// Approach:
// Use prefix sum and a map to store the first occurrence of each prefix sum.
// Traverse the array while maintaining the current prefix sum.
// If the prefix sum equals K, the subarray from index 0 to i has sum K.
// For each index, check whether (current sum - K) has appeared before.
// If it has, the elements after that previous index up to the current index
// form a subarray with sum K.
// Store only the first occurrence of each prefix sum to obtain the longest
// possible subarray.

// Time Complexity: O(n log n) (each map operation takes O(log n))
// Space Complexity: O(n) (map stores up to n prefix sums)

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

    std::map<long long, int> presum;

    long long sum = 0;

    int max_len = 0;

    for(int i=0; i<arr_size; i++){

        sum += arr[i];

        if(sum == k){

            max_len = std::max(max_len, i+1);

        }

        long long rem = sum - k;

        if(presum.find(rem) != presum.end()){

            int len = i - presum[rem];

            max_len = std::max(max_len, len);

        }

        if(presum.find(sum) == presum.end()){

            presum[sum] = i;

        }

    }

    std::cout<<"Maximum Length Subarray: "<<max_len<<std::endl;
    
    return 0;

}

