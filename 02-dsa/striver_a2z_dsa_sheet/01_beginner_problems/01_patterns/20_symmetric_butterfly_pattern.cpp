// Algorithm: Symmetric Butterfly Pattern

// Approach:
// The first outer loop prints the upper half, with the number of stars
// increasing from 1 to n.
// In each row, print i stars, followed by 2*(n-i) spaces, followed by i stars.
// The second outer loop prints the lower half, with the number of stars
// decreasing from n-1 to 1.
// Each row follows the same structure: stars, spaces, and stars.

// Time Complexity: O(n²) (prints 2n-1 rows with O(n) characters per row)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern20(int n) {

        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                cout<<"*";
            }
            for(int j=0; j<(2*(n-i)); j++){
                cout<<" ";
            }
            for(int j=0; j<i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

        for(int i=n-1; i>0; i--){
            for(int j=0; j<i; j++){
                cout<<"*";
            }
            for(int j=0; j<(2*(n-i)); j++){
                cout<<" ";
            }
            for(int j=0; j<i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
};