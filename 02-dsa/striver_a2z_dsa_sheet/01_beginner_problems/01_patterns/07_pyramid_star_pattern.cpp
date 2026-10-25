// Algorithm: Pyramid Star Pattern

// Approach:
// Use three nested loops.
// The outer loop runs from 1 to n to print n rows.
// The first inner loop prints n - i spaces in each row.
// The second inner loop prints 2 * i - 1 stars in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints O(n²) spaces and stars in total)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern7(int n) {

        for(int i=1; i<=n; i++){

            for(int j=0; j<(n-i); j++){
                cout<<" ";
            }

            for(int j=0; j<(2*i-1); j++){
                cout<<"*";
            }

            cout<<endl;

        }

    }
};