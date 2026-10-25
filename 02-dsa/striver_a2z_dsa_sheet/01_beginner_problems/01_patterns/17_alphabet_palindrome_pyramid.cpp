// Algorithm: Alphabet Palindrome Pyramid Pattern

#include<bits/stdc++.h>
using namespace std;

// Method 1: Separate Increasing and Decreasing Loops

// Approach:
// Use three nested loops.
// The outer loop runs from 1 to n to print n rows.
// The first inner loop prints n - i spaces.
// The second inner loop prints characters from 'A' to the i-th alphabet.
// The third inner loop prints characters in reverse order, from the previous alphabet back to 'A'.

// Time Complexity: O(n²) (prints O(n²) spaces and characters in total)
// Space Complexity: O(1) (only loop variables are used)

class Solution {
public:
    void pattern17(int n) {

        char ch = 'A';
    
        for(int i=1; i<=n; i++){
    
            for(int j=0; j<(n-i); j++){
                cout<<" ";
            }

            for(int j=0; j<i; j++){
                cout<<char(ch + j);
            }

            for(int j=i-1; j>0; j--){
                cout<<char(ch + j - 1);
            }

            cout<<endl;   

        }

    }
};

// Method 2: Breakpoint-Based Character Increment and Decrement

// Approach:
// Use two nested loops.
// The outer loop runs from 1 to n to print n rows.
// The first inner loop prints n - i spaces.
// Initialize ch = 'A' and calculate the breakpoint as (2*i - 1)/2.
// The second inner loop prints 2*i - 1 characters, incrementing ch before the breakpoint and decrementing it afterward.

// Time Complexity: O(n²) (prints O(n²) spaces and characters in total)
// Space Complexity: O(1) (only a constant number of variables are used)

class Solution {
public:
    void pattern17(int n) {

        for(int i=1; i<=n; i++){

            for(int j=0; j<(n-i); j++){
                cout<<" ";
            }

            char ch = 'A';

            int breakpoint = (2 * i - 1) / 2;

            for(int j=0; j<(2*i-1); j++){
                cout<<char(ch);

                if(j < breakpoint){ ch++; }
                else{   ch--;   }
            }

            cout<<endl;
        }

    }
};