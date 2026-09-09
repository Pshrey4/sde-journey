// Problem: Sort Colors
// Link: https://leetcode.com/problems/sort-colors/description/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force (Merge Sort Algorithm)

// Approach:
// Use a general sorting algorithm such as Merge Sort to sort the array in ascending order.

// Time Complexity: O(n log n) (Merge Sort divides the array recursively and merges the sorted halves)
// Space Complexity: O(n) (temporary arrays used during merging)

// Method 2: Better Approach

// Approach:
// Count the number of 0s, 1s, and 2s in the array.
// Then overwrite the array with the counted number of 0s, followed by 1s,
// and then 2s.

// Time Complexity: O(n) (one traversal to count and one traversal to rewrite)
// Space Complexity: O(1) (only three counters are used)

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();

        int countZero = 0;
        int countOne = 0;
        int countTwo = 0;

        for(int i=0; i<n; i++){

            if(nums[i] == 0){
                countZero++;
            }
            else if(nums[i] == 1){
                countOne++;
            }
            else{
                countTwo++;
            }

        }

        int i = 0;

        while(i<n && countZero > 0){
            nums[i] = 0;
            countZero--;
            i++;
        }

        while(i<n && countOne > 0){
            nums[i] = 1;
            countOne--;
            i++;
        }

        while(i<n && countTwo > 0){
            nums[i] = 2;
            countTwo--;
            i++;
        }
                
    }
};

// Method 3: Dutch National Flag Algorithm

// Approach:
// Divide the array into four regions using three pointers: low, mid, and high.
// [0 ... low-1] contains 0s.
// [low ... mid-1] contains 1s.
// [mid ... high] contains unsorted elements.
// [high+1 ... n-1] contains 2s.
// If nums[mid] is 0, swap it with nums[low] and move both low and mid.
// If nums[mid] is 1, simply move mid forward.
// If nums[mid] is 2, swap it with nums[high] and move high backward.
// After the traversal, the array is sorted.

// Time Complexity: O(n) (each element is processed a constant number of times)
// Space Complexity: O(1) (only three pointers are used)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();

        int low = 0, mid = 0, high = n-1;

        while(mid <= high){

            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }

        }

    }
};