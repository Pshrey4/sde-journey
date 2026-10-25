// Algorithm: Alphabet Triangle Pattern (Descending Starting Character)

// Approach:
// Initialize ch = 'A'.
// The outer loop runs from 1 to n to print n rows.
// The inner loop prints i characters, starting from 'A' + (n - i)
// and increasing the character by 1 after each iteration.
// Print a space after each character.
// After each row, print a newline.

// Time Complexity: O(n²) (prints 1 + 2 + ... + n characters)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern18(int n) {

        char ch = 'A';

        for(int i=1; i<=n; i++){

            for(int j=0; j<i; j++){

                cout<<char(ch+(n-i+j))<<" ";

            }

            cout<<endl;

        }

    }
};