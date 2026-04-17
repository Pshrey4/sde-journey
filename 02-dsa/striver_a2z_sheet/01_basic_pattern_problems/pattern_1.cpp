// Problem Statement: Given an integer n, print the following output
// * * * *
// * * * *
// * * * *
// * * * *

// Approach:
// Take an integer n as input to define the size of the square.
// Use a loop from 0 to n-1 to represent each row.
// Inside that loop, use another loop from 0 to n-1 to print stars in the current row.
// Print "* " during each inner loop iteration to form the row.
// After each inner loop completes, move to the next line.

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
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}