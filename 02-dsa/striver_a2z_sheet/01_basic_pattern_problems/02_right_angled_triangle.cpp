// Problem Statement: Given an integer n, print the following output
// * 
// * * 
// * * * 
// * * * *

// Approach:
// Run an outer loop from 0 to n-1 to handle rows.
// For each row i, run an inner loop from 0 to i.
// In the inner loop, print a star (*).
// After finishing the stars of one row, move to the next line using endl.

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}