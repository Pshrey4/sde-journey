// Problem: Palindrome Number
// https://leetcode.com/problems/palindrome-number/description/

// Approach:
// - Store the original number in a temporary variable
// - Reverse the number using modulus (%) and division (/)
// - Compare reversed number with the original number
// - If equal → Palindrome, else → Not Palindrome

// Edge Cases:
// - Negative numbers → not palindrome
// - Numbers ending with 0 (e.g., 10) → not palindrome
// - Single digit numbers → always palindrome
// - 0 → palindrome

#include<iostream>
#include<string>

int main(){
    int number, remainder, reverse=0, m;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    // Edge case: negative number
    if(number < 0){
        std::cout <<"Not Palindrome"<< std::endl;
        return 0;
    }

    m = number;

    while(m!=0){
        remainder = m % 10;
        m /= 10;
        reverse = reverse * 10 + remainder;
    }

    if(reverse==number){
        std::cout<<"Palindrome"<<std::endl;
    }
    else{
        std::cout<<"Not Palindrome"<<std::endl;
    }

    //Another method by converting int to string
    // std::string s = std::to_string(number);

    // int start = 0;
    // int end = s.length() - 1;

    // while(start < end){
    //     if(s[start] != s[end]){
    //         std::cout<<"Not Palindrome"<<std::endl;
    //         return 0;
    //     }
    //     start++;
    //     end--;
    // }

    // std::cout<<"Palindrome"<<std::endl;

    return 0;
}