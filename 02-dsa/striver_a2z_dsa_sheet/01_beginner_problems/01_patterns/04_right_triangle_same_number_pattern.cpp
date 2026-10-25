// Algorithm: Right-Angled Triangle Number Pattern (Same Number in Each Row)

// Approach:
// Use two nested loops.
// The outer loop runs from 1 to n to print n rows.
// The inner loop prints the current row number i, i times.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n numbers)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern4(int n) {

        for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){

                cout<<i;

            }

            cout<<endl;
            
        }

    }
};