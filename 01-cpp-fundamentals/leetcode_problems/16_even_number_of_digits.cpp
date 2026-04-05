// Problem: Find Numbers with Even Number of Digits
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

// Approach:
// - Take array input with validation
// - Traverse each element
// - Count digits by repeatedly dividing by 10
// - If digit count is even → increment counter
// - Print final count

// Edge Cases:
// - Single digit numbers → odd digit count
// - Minimum array size (length = 1)
// - Large numbers → more digits but same logic

// Mistakes:
// - Initially used if instead of while for validation
// - Did not consider repeated invalid inputs

// Learnings:
// - Use while loop for proper input validation
// - Digit counting using division is simple and effective
// - Use temporary variable to preserve original number
// - Even/odd checks using modulus (%)

#include<iostream>

int main(){

    int length;

    std::cout<<"Enter length of array: ";
    std::cin>>length;

    while(length<1){
        std::cout<<"Invalid length. Length can be greater than equal to 1."<<std::endl;
        std::cout<<"Enter length of array: ";
        std::cin>>length;
    }

    int array[length];

    std::cout<<"Enter elements of array"<<std::endl;

    //Loop to take array elements as input
    for(int i=0; i<length; i++){
        std::cin>>array[i];
        while(array[i]<=0){
            std::cout<<"Elements in array are positive integers. Renter: ";
            std::cin>>array[i];
        }
    }

    //Loop to display array
    for(int i=0; i<length; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    int count = 0;

    //Loop to check if each element in array has even number of digits
    for(int i=0; i<length; i++){
        int temp = array[i], digits = 0;
        while(temp != 0){
            temp /= 10;
            digits++;
        }
        if(digits%2==0){
            count++;
        }
    }

    std::cout<<"Numbers with Even Number of Digits: "<<count<<std::endl;

    return 0;
}