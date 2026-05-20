// Problem: Subtract the product and sum of digits of an integer
// Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Extract each digit of the number using modulus operator (% 10).
// Add the digit to sum and multiply it to product.
// Remove the last digit using division by 10.
// Return the difference between product and sum.

// Time Complexity: O(d) (d is number of digits in n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum = 0;
        int product = 1;

        while(n>0){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }

        return product - sum;
        
    }
};