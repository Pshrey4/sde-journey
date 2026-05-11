// Problem Statement: Given an integer n, print the following output
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// Approach:
// Iterate from i = 1 to i<=n to process each row.
// If the current row is the first row or last row:
// run an inner loop from j = 1 to j<=n and print stars.
// else:
// print one star at the beginning.
// Run another loop to print (n-2) spaces in the middle.
// Print one star at the end.
// Print a newline after completing each row.

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    //loop to print upper half crown
    for(int i=1; i<=n; i++){

        if(i==1 || i==n){

            for(int j=1; j<=n; j++){
                cout<<"* ";
            }

        }
        else{

            cout<<"* ";

            //loop to print spaces
            for(int j=1; j<=n-2; j++){
                cout<<"  ";
            }

            cout<<"* ";

        }

        cout<<endl;
    }

    return 0;
}