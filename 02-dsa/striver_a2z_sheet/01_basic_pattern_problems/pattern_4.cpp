// Problem Statement: Given an integer n, print the following output
// 1 
// 2 2
// 3 3 3 
// 4 4 4 4 

// Approach:
// Use an outer loop (i) from 1 to N for rows.
// For each row, use an inner loop (j) from 1 to i.
// Instead of printing j, print i (the current row number).
// After completing one row, move to the next line.

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}