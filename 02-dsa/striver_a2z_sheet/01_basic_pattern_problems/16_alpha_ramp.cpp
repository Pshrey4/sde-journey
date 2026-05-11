// Problem Statement: Given an integer n, print the following output
// A
// B B
// C C C
// D D D D
// E E E E E 

// Approach:
// Run an outer loop (i) from 0 to n-1 to handle rows.
// Take char variable ch store 'A'+i
// Run an inner loop (j) from 0 to i
// Inside inner loop print ch

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
            cout<<char('A'+i)<<" ";
        }  
        
        cout<<endl;
    }

    return 0;
}