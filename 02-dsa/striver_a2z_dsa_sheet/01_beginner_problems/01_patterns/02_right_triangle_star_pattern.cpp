// Algorithm: Right-Angled Triangle Star Pattern

// Approach:
// Use two nested loops.
// The outer loop runs n times to print n rows.
// The inner loop prints i + 1 stars in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n stars)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern2(int n) {

        for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++){

                cout<<"*";

            }

            cout<<endl;
            
        }

    }
};