// Algorithm: Hollow Square Star Pattern

#include<bits/stdc++.h>
using namespace std;

// Method 1: Row-Based Boundary Handling

// Approach:
// The outer loop iterates through n rows.
// If the row is the first or last row, print n stars.
// Otherwise, print one star at the beginning, n-2 spaces,
// and one star at the end to create the hollow interior.

// Time Complexity: O(n²) (the nested loops print O(n²) characters overall)
// Space Complexity: O(1) (only loop variables are used)

class Solution {
public:
    void pattern21(int n) {

        for(int i=1; i<=n; i++){

            if(i==1 || i==n){

                for(int j=0; j<n; j++){
                    cout<<"*";
                }

            }
            else{

                cout<<"*";

                for(int j=0; j<(n-2); j++){
                    cout<<" ";
                }

                cout<<"*";
            }

            cout<<endl;

        }

    }
};


// Method 2: Boundary Condition Checking

// Approach:
// Use nested loops to iterate through all n*n positions.
// Print a star if the position belongs to the first row, first column,
// last row, or last column.
// Otherwise, print a space to keep the interior hollow.

// Time Complexity: O(n²) (visits all n*n positions)
// Space Complexity: O(1) (only loop variables are used)

class Solution {
public:
    void pattern21(int n) {

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                if(i==0 || j==0 || i==n-1 || j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }

            cout<<endl;
        }

    }
};