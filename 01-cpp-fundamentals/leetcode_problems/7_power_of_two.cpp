// Problem: Power of Two
// https://leetcode.com/problems/power-of-two/description/

// Approach:
// - A power of two has exactly one set bit in its binary representation
// - Count number of set bits using bit manipulation
// - If count == 1 → power of two, else → not

// Edge Cases:
// - Input = 0 → not a power of two
// - Negative numbers → not a power of two
// - Input = 1 → power of two (2^0)

// Mistakes:
// - Missed that invalid inputs should be rejected before processing

// Learnings:
// - (number & 1) checks last bit
// - Right shift (>>) helps traverse all bits
// - Power of two numbers have exactly one set bit
// - Learned optimized check using (n & (n - 1)) == 0

// Note:
// - Optimized solution:
//   if(n > 0 && (n & (n - 1)) == 0)

#include<iostream>

int main(){

    int number, count = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    //Reject invalid cases immediately
    if(number<=0){
        std::cout<<"Not a power of two"<<std::endl;
        return 0;
    }

    //Approach 1: Using loop
    //takes O(logn) time
    while(number>0){
        if(number&1){
            count++;
        }
        number>>=1;
    }

    if(count==1){
        std::cout<<"Power of Two"<<std::endl;
    }
    else{
        std::cout<<"Not a power of two"<<std::endl;
    }

    //Approach 2: Optimized Solution
    // takes O(1) time
    // if(number > 0 && (number & (number - 1)) == 0){
    //     std::cout<<"Power of Two"<<std::endl;
    // }
    // else{
    //     std::cout<<"Not a power of two"<<std::endl;
    // }
    
    return 0;
}