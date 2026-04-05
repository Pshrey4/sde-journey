// Problem: Add Digits
// https://leetcode.com/problems/add-digits/description/

// Approach:
// - Extract digits using modulus (%) and division (/)
// - Add digits to compute sum
// - If sum >= 10, repeat process using sum as new number
// - Continue until a single digit is obtained

// Edge Cases:
// - Input = 0 → output = 0
// - Single digit number → return same number
// - Large numbers → multiple iterations required

// Mistakes:
// - None (logic handled correctly)

// Learnings:
// - How to repeatedly process digits using loops
// - Understanding iterative reduction of number
// - Learned about alternative O(1) solution using digital root

// Note:
// - Optimal solution exists using formula:
//   1 + (n - 1) % 9

#include<iostream>

int main(){

    int number, sum = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    //Approach 1: Using loop
    //it take O(logn) time
    while(number!=0){
        int digit = number % 10;
        sum += digit;
        number /= 10;
        if(number==0 && sum>=10){
            number = sum;
            sum =0;
        }
    }

    //Approach 2: Using math trick
    //optimal solution takes O(1) time
    // if(number==0) return 0;
    // else return 1 + (number - 1) % 9;

    std::cout<<"Sum: "<<sum<<std::endl;
    
    return 0;
}