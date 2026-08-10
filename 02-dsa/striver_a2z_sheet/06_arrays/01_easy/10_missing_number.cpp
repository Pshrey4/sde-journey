// Algorithm: Missing Number

// Approach:
// The numbers range from 1 to n, with exactly one number missing.
// Since the array contains n-1 elements, calculate n as arr_size + 1.
// Calculate the expected sum of numbers from 1 to n.
// Calculate the sum of all elements present in the array.
// The difference between the expected sum and the actual array sum
// gives the missing number.

// Time Complexity: O(n) (two linear traversals)
// Space Complexity: O(1)

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

    int n = arr_size + 1;

    int sum = 0;

    for(int i=1; i<=n; i++){

        sum += i;

    }

    int sum_arr = 0;

    for(int i=0; i<arr_size; i++){

        sum_arr += arr[i];

    }

    int missing;

    missing = sum - sum_arr;

    std::cout<<"Missing Number: "<<missing<<std::endl;    
    
    return 0;

}

