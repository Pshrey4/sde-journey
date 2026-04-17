// Problem Statement: Given an integer n, print the following output
// 1 2 3 4 
// 1 2 3
// 1 2  
// 1 

// Approach:
// Run an outer loop (i) from n to 1 for rows.
// For each row, run an inner loop (j) starting from 1 to i.
// Print j in each iteration of the inner loop.
// After finishing each row, print a newline to move to the next row.

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}