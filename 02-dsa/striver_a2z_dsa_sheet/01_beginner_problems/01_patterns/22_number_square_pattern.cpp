// Algorithm: Number Pattern with Concentric Squares

// Method 1: Minimum Distance from Boundary

// Approach:
// The outer and inner loops iterate through 2*n-1 rows and columns.
// For each position (i, j), calculate its distance from the top, left,
// right, and bottom boundaries.
// Find the minimum of these four distances.
// Subtract this minimum from n to determine the number to print.
// Print a space after each number and move to the next line after each row.

// Time Complexity: O(n²) (iterates through (2*n-1)² positions)
// Space Complexity: O(1) (uses only a constant number of variables)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {

        for(int i=0; i<(2*n-1); i++){

            for(int j=0; j<(2*n-1); j++){

                int top = i;

                int left = j;

                int right = (2 * n - 2) - j;

                int bottom = (2 * n - 2) - i;

                cout<<(n-min(min(left, right), min(top, bottom)));

                if(j < 2*n) cout<<" ";
            }

            cout<<endl;
            
        }

    }
};