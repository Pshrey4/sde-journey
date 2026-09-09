// Problem: Two Sum
// Link: https://leetcode.com/problems/two-sum/description/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force

// Approach:
// Check every possible pair of elements using two nested loops.
// If the sum of a pair equals the target, return their indices.

// Time Complexity: O(n²) (checking all possible pairs)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        for(int i=0; i<n; i++){

            for(int j=i+1; j<n; j++){

                if(nums[i] + nums[j] == target){

                    return {i, j};

                }

            }

        }

        return {-1, -1};
    }
};

// Method 2: Using Ordered Map

// Approach:
// Traverse the array while storing each element and its index in a map.
// For the current element, calculate the required complement as target - element.
// Check whether the complement already exists in the map.
// If it exists, return the stored index and the current index.
// Otherwise, store the current element and its index.

// Time Complexity: O(n log n) (each map operation takes O(log n))
// Space Complexity: O(n) (map stores up to n elements)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        map<int, int> hmap;

        for(int i=0; i<n; i++){

            int element = nums[i];

            int rem = target - element;

            if(hmap.find(rem) != hmap.end()){

                return {hmap[rem], i};

            }

            hmap[element] = i;

        }

        return {-1, -1};
        
    }
};

// Method 3: Two-Pointer Approach for Target-Sum Existence

// Approach:
// Sort the array and use two pointers, one at the beginning and one at the end.
// If the sum of the two elements equals the target, return true.
// If the sum is smaller than the target, move the left pointer forward.
// If the sum is greater than the target, move the right pointer backward.
// If the pointers cross without finding the target, return false.

// Time Complexity: O(n log n) (sorting dominates the two-pointer traversal)
// Space Complexity: O(1) (ignoring the space used internally by sorting)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string twoSumExists(vector<int> arr, int target) {

        int n = arr.size();
        
        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;

        while(left < right) {

            int sum = arr[left] + arr[right];

            if(sum == target) return "YES";

            else if(sum < target) left++;

            else right--;

        }

        return "NO";

    }

};




