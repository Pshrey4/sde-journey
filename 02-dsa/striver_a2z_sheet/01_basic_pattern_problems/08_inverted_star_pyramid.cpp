// Problem Statement: Given an integer n, print the following output
// * * * * * * * 
//   * * * * * 
//     * * *
//       *

// Approach:
// Run an outer loop (i) from n-1 to 0 for rows.
// Print i spaces before the stars.
// Print 2 * i + 1 stars.
// Print i spaces after the stars (optional for symmetry in visualization).
// Move to the next line after each row.

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=n-1; i>=0; i--){

        //loop to print leading spaces
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }

        //loop to print stars
        for(int j=0; j<2*i+1; j++){
            cout<<"* ";
        }

        //loop to print trailing spcaes
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}