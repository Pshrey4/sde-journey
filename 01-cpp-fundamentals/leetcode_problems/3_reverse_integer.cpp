// Problem: Reverse Integer
// https://leetcode.com/problems/reverse-integer/description/

// Approach:
// - Extract digits using modulus (%) and division (/)
// - Build reversed number using: reverse = reverse * 10 + remainder
// - Before updating reverse, check if next step will cause overflow
// - If overflow condition is met → return 0

// Edge Cases:
// - Input = 0
// - Negative numbers (should return negative reversed number)
// - Numbers ending with 0 (e.g., 120 → 21)
// - Large numbers causing overflow (e.g., 1534236469)

// Mistakes:
// - Initially checked overflow AFTER updating reverse (too late)
// - Used incorrect limits (INT32_MAX instead of INT_MAX for int)
// - Missed edge overflow case when reverse == INT_MAX/10

// Learnings:
// - Overflow must be checked BEFORE updating the value
// - INT_MAX = 2147483647 and INT_MIN = -2147483648
// - Use INT_MAX and INT_MIN from for int type
// - When reverse == INT_MAX/10, last digit must be ≤ 7
// - When reverse == INT_MIN/10, last digit must be ≥ -8

#include<iostream>
#include<climits>

int main(){
    int number, reverse=0, m, remainder;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    m = number;

    while(m!=0){
        remainder = m % 10;
        m /= 10;
        
        //check for out of range
        if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
            std::cout<<"Out of Range"<<std::endl;
            return 0;
        }

        //overflow check more intense
        // if (reverse > INT_MAX/10 || 
        // (reverse == INT_MAX/10 && remainder > 7) ||
        //     reverse < INT_MIN/10 || 
        // (reverse == INT_MIN/10 && remainder < -8)) {
    
        //     return 0;
        // }

        reverse = reverse * 10 + remainder;        
    }

    std::cout<<"Reverse: "<<reverse<<std::endl;

    return 0;
}