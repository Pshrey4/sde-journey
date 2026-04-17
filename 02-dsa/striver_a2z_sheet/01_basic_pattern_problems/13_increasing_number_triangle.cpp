// Problem Statement: Given an integer n, print the following output
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// Approach:
// Take a variable counter initialize it to 0
// Run an outer loop from 1 to n to handle rows.
// Run an inner loop from 1 to i
// Inside inner loop increment counter, print counter

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int counter = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            counter++;
            cout<<counter<<" ";
        }  
        cout<<endl;
    }

    return 0;
}