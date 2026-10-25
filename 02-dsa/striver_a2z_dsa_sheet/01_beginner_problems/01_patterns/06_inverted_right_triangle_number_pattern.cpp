// Algorithm: Inverted Right-Angled Triangle Number Pattern

// Approach:
// Use two nested loops.
// The outer loop runs from n down to 1 to print n rows.
// The inner loop prints numbers from 1 to i in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints n + (n-1) + ... + 1 numbers)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern6(int n) {

        for(int i=n; i>0; i--){

            for(int j=1; j<=i; j++){

                cout<<j;

            }

            cout<<endl;
            
        }

    }
};