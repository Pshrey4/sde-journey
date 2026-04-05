// Problem: Valid Perfect Square
// https://leetcode.com/problems/valid-perfect-square/description/

// Approach:
// - Start with checker = 1
// - Compute squares (checker * checker)
// - Keep increasing checker until square >= number
// - If square == number → perfect square
// - Else → not a perfect square

// Edge Cases:
// - number = 1 → perfect square
// - number = 0 → (LeetCode considers it valid, but locally handled as invalid)
// - Negative numbers → not a perfect square

// Mistakes:
// - None (logic implemented correctly)

// Learnings:
// - Iterative checking works but is not optimal
// - Need better approach for large inputs (binary search)

// Note:
// - Optimized approach: Binary Search (O(log n))
// - Avoid multiplication overflow by comparing mid <= number / mid
// - Will use binary search after starting dsa

#include<iostream>

int main(){

    int number, product = 0, checker = 1;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    if(number<=0){
        std::cout<<"Invalid Input"<<std::endl;
        return 0;
    }

    while(product<number){
        product = checker * checker;
        checker++;
    }

    if(number == product){
        std::cout<<"Perfect Square"<<std::endl;
    }
    else{
        std::cout<<"Not Perfect Square"<<std::endl;
    }

    return 0;
}