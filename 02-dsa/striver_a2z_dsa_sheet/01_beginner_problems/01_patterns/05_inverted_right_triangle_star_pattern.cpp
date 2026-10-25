// Algorithm: Inverted Right-Angled Triangle Star Pattern

// Approach:
// Use two nested loops.
// The outer loop runs from n down to 1 to print n rows.
// The inner loop prints i stars in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints n + (n-1) + ... + 1 stars)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern5(int n) {

        for(int i=n; i>0; i--){

            for(int j=0; j<i; j++){

                cout<<"*";

            }

            cout<<endl;
            
        }

    }
};