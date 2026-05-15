// Problem: Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/

// Approach:
// Negative numbers cannot be palindrome numbers, so return false for x < 0.
// Reverse the number digit by digit using modulo and division.
// Before updating the reversed number, check for integer overflow.
// Compare the reversed number with the original number to determine if it is a palindrome.

// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include <climits>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int rev = 0;

        int temp = x;

        while(temp!=0){
            int q = temp % 10;

            temp /= 10;

            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return false;
            }

            rev = q + rev * 10;
        }

        if(rev==x){
            return true;
        }
        else{
            return false;
        }
           
    }
};