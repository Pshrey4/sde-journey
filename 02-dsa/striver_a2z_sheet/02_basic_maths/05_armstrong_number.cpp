// Problem Statement: Given an integer n, return true it is an Armstrong number otherwise return false.

// Approach:
// Take a non-negative number as input from the user.
// Count the total number of digits in the number.
// Extract each digit using modulo and add its power value to the sum.
// Compare the final sum with the original number to check if it is an Armstrong number.

// Complexity Analysis:
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include<iostream>
#include<cmath>

int main(){
    
    int number;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    if(number<0){
        std::cout<<"Invalid input"<<std::endl;
        return 0;
    }

    int power = std::to_string(number).length();

    int temp = number;

    int sum = 0;

    while(temp>0){
        int digit = temp % 10;
        sum += pow(digit, power);
        temp /= 10;
    }

    if(sum==number){
        std::cout<<"Armstrong number"<<std::endl;
    }
    else{
        std::cout<<"Not an armstrong number"<<std::endl;
    }
    
    return 0;
}