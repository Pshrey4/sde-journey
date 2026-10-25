// Algorithm: Symmetric Void Pattern

// Approach:
// The first outer loop prints the upper half of the pattern, with the number
// of stars decreasing from n to 1.
// In each row, print i stars, followed by 2*(n-i) spaces, followed by i stars.
// The second outer loop prints the lower half, with the number of stars
// increasing from 1 to n.
// Each row follows the same structure: stars, spaces, and stars.

// Time Complexity: O(n²) (the total characters printed across all rows are O(n²))
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {

        for(int i=n; i>0; i--){
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

    }
};