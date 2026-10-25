// Algorithm: Right-Angled Triangle Number Pattern

// Approach:
// Use two nested loops.
// The outer loop runs from 1 to n to print n rows.
// The inner loop prints numbers from 1 to i in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n numbers)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern3(int n) {

        for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){

                cout<<j;

            }

            cout<<endl;
            
        }

    }
};