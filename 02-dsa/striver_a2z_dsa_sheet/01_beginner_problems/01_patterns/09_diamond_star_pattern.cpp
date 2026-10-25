// Algorithm: Diamond Star Pattern

// Approach:
// Use two sets of nested loops to print the upper and lower pyramids.
// In each set, the outer loop controls the rows.
// The first inner loop prints n - i spaces.
// The second inner loop prints 2 * i - 1 stars.
// After each row, print a newline.
// The upper half prints from i = 1 to n, and the lower half prints from i = n to 1.

// Time Complexity: O(n²) (prints O(n²) spaces and stars in total)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern9(int n) {

        for(int i=1; i<=n; i++){

            for(int j=0; j<(n-i); j++){
                cout<<" ";
            }

            for(int j=0; j<(2*i-1); j++){
                cout<<"*";
            }

            cout<<endl;

        }

        for(int i=n; i>0; i--){

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