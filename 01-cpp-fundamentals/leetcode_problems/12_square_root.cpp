// Problem: Sqrt(x)
// https://leetcode.com/problems/sqrtx/description/

// Approach:
// - Iterate from 1 to number
// - Compute square = i * i
// - If square == number → return i
// - If square > number → return i - 1
// - This gives the floor value of square root

// Edge Cases:
// - number = 1 → square root is 1
// - number = 0 → square root is 0 (handled as invalid locally)
// - Large numbers → may cause overflow in i * i

// Mistakes:
// - None (logic implemented correctly)

// Learnings:
// - Square root is the largest integer whose square ≤ number
// - Brute force works but is slow (O(n))
// - Need optimized approach like binary search (O(log n))

// Note:
// - Optimized approach: Binary Search

#include<iostream>

int main(){

    int number;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    if(number<=0){
        std::cout<<"Invalid input"<<std::endl;
        return 0;
    }

    for(int i=1; i<=number; i++){
        int square = i * i;
        if(number<=square){
            if(number==square){
                std::cout<<"Square root: "<<i<<std::endl;
                return 0;
            }
            else{
                std::cout<<"Square root: "<<i-1<<std::endl;
                return 0;
            }
        }
    }

    return 0;
}