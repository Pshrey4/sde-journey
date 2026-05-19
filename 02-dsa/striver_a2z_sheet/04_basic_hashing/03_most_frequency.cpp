// Problem: Frequency of the most frequent element
// Link: https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/

// Approach:
// Brute Force Method 1:
// Sort the array so that smaller elements come before larger elements.
// For every element nums[i], assume it is the target frequency element.
// Create a copy of the array and try to convert smaller elements into nums[i]
// using at most k operations.
// Count how many elements become equal to nums[i].
// Store the maximum frequency obtained.
// Brute Force Method 2:
// Sort the array.
// For every element nums[i], assume it is the target element.
// Traverse backwards from i-1 and calculate the operations needed
// to convert nums[j] into nums[i].
// If enough operations remain, include that element in frequency count.
// Track the maximum frequency obtained.

// Brute Force Method 1:
// Time Complexity: O(n²) 
// Space Complexity: O(n)
// Brute Force Method 2:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

// Brute Force Method 1:
// This causes high memory usage
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int max_frequency = 0;

        for(int i=0; i<nums.size(); i++){
            int operations = k;
            int count = 0;

            vector<int> num_copy = nums;
            
            for(int j=i-1; j>=0; j--){
                if(num_copy[j]>=nums[i]){
                    continue;
                }
                else{
                    int need = nums[i] - num_copy[j];
                    if(need<=operations){
                        num_copy[j] = nums[i];
                        operations -= need;
                        
                    }                    
                    
                }
            }

            for(int j=0; j<=i; j++){
                if(num_copy[j]==nums[i]){
                    count++;
                }
            }

            if(count>max_frequency){
                max_frequency= count;
            }
            
        }

        return max_frequency;
        
    }
};

// Brute Force Method 2:
// This gives Time Limit Exceeded (TLE)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int max_frequency = 0;

        for(int i=0; i<nums.size(); i++){
            long long operations = k;
            int count = 1;
            
            for(int j=i-1; j>=0; j--){
                long long need = nums[i] - nums[j];

                if(need <= operations){
                    operations -= need;
                    count++;
                }
                else{
                    break;
                }
            }

            if(count>max_frequency){
                max_frequency= count;
            }
            
        }

        return max_frequency;
        
    }
};

// Optimal solution for this problem is using sliding window and other concepts
// So I will come back to this after covering those concepts
// For now this is the brute force solution