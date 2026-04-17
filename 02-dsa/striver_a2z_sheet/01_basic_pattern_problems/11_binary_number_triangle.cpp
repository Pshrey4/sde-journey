// Problem Statement: Given an integer n, print the following output
// 1
// 0 1
// 1 0 1
// 0 1 0 1

// Approach:
// Run an outer loop from 1 to n to handle rows.
// Run an inner loop from 1 to i
// Consider it like a matrix, if i+j is even print 1, else if odd print 0

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
            if((i+j) % 2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    return 0;
}