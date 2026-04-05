// Problem: Subtract the product and sum of digits of an integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

// Approach:
// - Extract each digit using modulus (%) and division (/)
// - Multiply digits to compute product
// - Add digits to compute sum
// - Return product - sum

// Edge Cases:
// - Input = 0
// - Single digit number
// - Numbers containing 0 (product becomes 0)

// Mistakes:
// - Added unnecessary condition for number <= 0
// - Did not fully consider problem constraints (input is positive)

// Learnings:
// - Always check constraints before handling extra cases
// - Use a single loop to process digits efficiently

// Note:
// - Problem assumes input is a positive integer
// - Constraints: 1<=n<=10^5

#include<iostream>

int main(){
    int number, product = 1, sum = 0, subtract;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    while(number!=0){
        int digit = number % 10;
        product *= digit;
        sum += digit;
        number /= 10;
    }    

    subtract = product - sum;
    
    std::cout<<"Result: "<<subtract<<std::endl;

    return 0;
}