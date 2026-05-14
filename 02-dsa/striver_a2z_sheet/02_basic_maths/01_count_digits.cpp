// Problem Statement: Given an integer n, return the number of digits in n.

// Approach:
// Take an integer number as input.
// Initialize a variable count = 0 to store the number of digits.
// Use a while loop that runs until number becomes 0.
// In each iteration:
// Increment count by 1.
// Divide number by 10 to remove the last digit.
// After the loop ends, count will contain the total number of digits.
// Print the value of count.

// Complexity Analysis:
// Time Complexity: O(log₁₀(n))
// Space Complexity: O(1)

#include<iostream>
// #include<cmath> // uncomment for mathematical approach

int main(){

    int number;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    int temp = number;

    // If number is negative, convert it to positive
    if(temp<0){
        temp = abs(temp);
    }

    int count = 0;

    // Mathematical approach using logarithm
    // int count = (int)(log10(number)+1);
    // this solution works in O(1) time

    // Edge case: if number = 0
    if(number == 0){
        count = 1;
    }

    while(temp>0){
        count++;
        temp /= 10;
        
    }

    std::cout<<"Number: "<<number<<std::endl;
    std::cout<<"Digit count: "<<count<<std::endl;

    return 0;
}