// Algorithm: Increasing Alphabet Triangle Pattern

// Approach:
// Use two nested loops.
// The outer loop runs from 0 to n - 1 to print n rows.
// The inner loop prints characters starting from 'A' up to 'A' + i.
// Convert ch + j to char to print the corresponding alphabet.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n characters)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern14(int n) {

        char ch = 'A';

        for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++){

                cout<<char(ch + j);

            }

            cout<<endl;

        }

    }
};