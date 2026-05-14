// Problem: Reverse Integer
// Link: https://leetcode.com/problems/reverse-integer/description/

// Approach:
// Reverse digit by digit using modulo and division.
// Before multiplying by 10, check for overflow.

// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include <climits>

class Solution {
public:
    int reverse(int x) {

        int rev = 0;

        while(x!=0){
            int q = x % 10;

            x /= 10;

            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }

            rev = q + rev * 10;
        }
        
        return rev;
    }
};
