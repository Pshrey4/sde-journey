// Algorithm: Number Crown Pattern

// Approach:
// Use nested loops to print each row.
// The first inner loop prints numbers from 1 to i in increasing order.
// The second inner loop prints 2*n - 2*i spaces to separate the two halves.
// The third inner loop prints numbers from i to 1 in decreasing order.
// After each row, print a newline.

// Time Complexity: O(n²) (prints O(n²) numbers and spaces in total)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {

        for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){
                cout<<j;
            }

            for(int j=1; j<=(2*n - 2*i); j++){
                cout<<" ";
            }

            for(int j=i; j>0; j--){
                cout<<j;
            }

            cout<<endl;
            
        }

    }
};