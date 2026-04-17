// Problem Statement: Given an integer n, print the following output
//       *
//     * * *
//   * * * * * 
// * * * * * * * 

// Approach:
// Run an outer loop (i) from 0 to n-1 for rows.
// Print n - i - 1 spaces before the stars.
// Print 2 * i + 1 stars.
// Print n - i - 1 spaces again (optional, only for symmetry in visualization).
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

    for(int i=0; i<n; i++){

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