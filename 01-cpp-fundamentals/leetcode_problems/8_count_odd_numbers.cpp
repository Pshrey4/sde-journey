// Problem: Count Odd Numbers in an Interval Range
// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/

// Approach:
// - Traverse from low to high
// - Check if each number is odd using (i % 2 != 0)
// - Count total odd numbers

// Edge Cases:
// - low = high
// - Range with no odd numbers
// - Range with all odd numbers

// Mistakes:
// - None (logic implemented correctly)

// Learnings:
// - How to identify odd numbers using modulus
// - Basic iteration and counting

// Note:
// - Optimized solution exists using math:
//   count = (high - low) / 2
//   if(low % 2 != 0 || high % 2 != 0) count++

#include<iostream>

int main(){

    int low, high, count = 0;

    std::cout<<"Enter low: ";
    std::cin>>low;

    std::cout<<"Enter high: ";
    std::cin>>high;

    //Approach 1: Using for loop and traversing through entire range
    // takes O(n) time
    for(int i=low; i<=high; i++){
        if(i%2 != 0){
            count++;
        }
    }

    //Approach 2: Optimized solution
    // takes O(1) time
    // count = (high - low) / 2;
    // if(low%2 != 0 || high%2 !=0){
    //     count++;
    // }

    std::cout<<"Total odd numbers: "<<count<<std::endl;

    return 0;
}