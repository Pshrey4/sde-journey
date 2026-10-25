// Algorithm: Increasing Number Triangle Pattern

// Approach:
// Initialize num = 0 before the loops.
// The outer loop runs from 0 to n - 1 to print n rows.
// The inner loop runs from 0 to i, incrementing num and printing it.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n numbers)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern13(int n) {

        int num = 0;

        for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++){
                num++;
                cout<<num<<" ";
            }

            cout<<endl;

        }

    }
};