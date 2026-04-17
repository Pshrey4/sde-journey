// Problem Statement: Given an integer n, print the following output
// 1 
// 1 2
// 1 2 3 
// 1 2 3 4 

// Approach:
// Use an outer loop (i) from 1 to n for rows.
// For each row, use an inner loop (j) from 1 to i to print numbers.
// Each row prints numbers starting from 1 up to the current row index.
// After printing each row, move to the next line.

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
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}