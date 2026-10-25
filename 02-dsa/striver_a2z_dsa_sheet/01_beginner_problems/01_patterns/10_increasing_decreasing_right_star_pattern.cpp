// Algorithm: Increasing-Decreasing Right-Angled Triangle Star Pattern

// Approach:
// Use an outer loop that runs from 1 to 2*n - 1 to print the rows.
// Initialize k = i to determine the number of stars in each row.
// If i > n, update k = 2*n - i to decrease the number of stars.
// The inner loop prints k stars in each row.
// After each row, print a newline.

// Time Complexity: O(n²) (prints n² stars in total order of growth)
// Space Complexity: O(1) (only loop variables are used)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern10(int n) {

        for(int i=1; i<=(2*n-1); i++){

            int k = i;

            if(i>n){
                k = (2*n) - i;
            }

            for(int j=1; j<=k; j++){
                cout<<"*";
            }

            cout<<endl;

        }

    }
};