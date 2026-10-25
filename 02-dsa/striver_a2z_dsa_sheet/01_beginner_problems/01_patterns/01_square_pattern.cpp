// Algorithm: Square Star Pattern

// Approach:
// Use two nested loops.
// The outer loop runs n times to print n rows.
// The inner loop prints n stars in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (n rows with n stars per row)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern1(int n) {

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                cout<<"*";

            }

            cout<<endl;
            
        }

    }
};