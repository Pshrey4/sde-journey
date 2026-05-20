// Problem: Find numbers with even number of digits
// Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Traverse each element of the array.
// Count the number of digits in each number using a loop.
// If the digit count is even, increment the answer count.
// Return the total count of numbers having even number of digits.

// Time Complexity: O(n * d) (d is number of digits in a number)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for(int i=0; i<nums.size(); i++){

            int number = nums[i];
            int digit = 0;

            while(number>0){
                number /= 10;
                digit++;
            }

            if(digit % 2 == 0){
                count++;
            }

        }

        return count;
        
    }
};