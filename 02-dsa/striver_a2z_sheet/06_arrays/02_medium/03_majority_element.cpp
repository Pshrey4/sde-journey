// Problem: Majority Element
// Link: https://leetcode.com/problems/majority-element/description/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using Ordered Map

// Approach:
// Traverse the array and store the frequency of each element in an ordered map.
// Then traverse the map and find the element with the highest frequency.

// Time Complexity: O(n log n) (map insertion takes O(log n), and the map traversal takes O(n) in the worst case)
// Space Complexity: O(n) (map can store up to n distinct elements)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        map<int, int> count;

        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }

        int maxFreq = 0;

        int majorElement = 0;

        for(auto lt: count){

            if(lt.second > maxFreq){
                maxFreq = lt.second;
                majorElement = lt.first;
            }

        }

        return majorElement;
        
    }
};

// Method 2: Moore's Voting Algorithm

// Approach:
// Maintain a candidate element and a count.
// If the count becomes 0, select the current element as the new candidate.
// If the current element matches the candidate, increment the count.
// Otherwise, decrement the count.
// Since the majority element appears more than n/2 times, it will remain as the final candidate.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (only constant extra variables are used)


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        int count = 0;

        int element;

        for(int i=0; i<n; i++){

            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(nums[i] == element){
                count++;
            }
            else{
                count--;
            }

        }
        
        return element;
    }
};