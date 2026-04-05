// Problem: Self Dividing Numbers
// https://leetcode.com/problems/self-dividing-numbers/description/

// Approach:
// - Iterate from left to right
// - For each number:
//     - Extract digits using modulus (%)
//     - Check:
//         - Digit should not be 0
//         - Number should be divisible by each digit
//     - If all digits satisfy conditions → print number

// Edge Cases:
// - Numbers containing 0 → invalid (division by zero)
// - Single digit numbers → always valid (except 0)
// - Invalid intervals (left <= 0 or right <= 0)

// Mistakes:
// - Initially forgot to handle digit = 0 → caused division by zero error
// - Did not consider crash scenario (i % 0)

// Learnings:
// - Always check for division by zero before using % or /
// - Use a temporary variable to preserve original number
// - Breaking early improves efficiency
// - Edge case handling is critical for stability

#include<iostream>

int main(){

    int left, right;

    std::cout<<"Enter left interval: ";
    std::cin>>left;

    std::cout<<"Enter right interval: ";
    std::cin>>right;

    if(left <=0 || right <= 0){
        std::cout<<"Invalid intervals"<<std::endl;
        return 0;
    }

    for(int i=left; i<=right; i++){
        int temp = i;
        while(temp!=0){
            int digit = temp % 10;
            if(digit==0 || i%digit != 0){
                break;
            }
            temp /= 10;
        }
        if(temp == 0){
            std::cout<<i<<" ";
        }
    }

    std::cout<<std::endl;

    return 0;
}