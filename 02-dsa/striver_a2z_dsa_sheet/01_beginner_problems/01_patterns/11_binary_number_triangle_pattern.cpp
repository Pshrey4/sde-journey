// Algorithm: Binary Number Triangle Pattern

// Approach:
// Use two nested loops.
// The outer loop runs from 1 to n to print n rows.
// The inner loop runs from 1 to i to print i numbers in each row.
// If (i + j) is even, print 1; otherwise, print 0.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n numbers)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {

        for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){

                if((i+j) % 2 == 0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }

            }

            cout<<endl;

        }

    }
};