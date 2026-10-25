// Algorithm: Alpha-Ramp Pattern

// Approach:
// Use two nested loops.
// The outer loop runs from 0 to n - 1 to print n rows.
// The inner loop prints the character 'A' + i, i + 1 times in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n characters)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern16(int n) {

        char ch = 'A';

        for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++){
                
                cout<<char(ch+i);

            }

            cout<<endl;

        }

    }
};