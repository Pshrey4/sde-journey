// Problem Statement: Given an integer n, print the following output
// * * * * * *
// * *     * *
// *         *
// *         *
// * *     * *
// * * * * * *

// Approach:
// Upper Half: Inverted Crown
// Iterate from i = n to i>0.
// Inner loop prints i stars on the left side.
// Another loop prints 2*(n-i) spaces in the middle.
// Next loop prints i stars on the right side.
// Print a newline after completing each row.
// Lower Half: Crown
// Iterate from i = 1 to i<=n.
// Inner loop prints i stars on the left side.
// Another loop prints 2*(n-i) spaces in the middle.
// Next loop prints i stars on the right side.
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

    //loop to print upper half inverted crown
    for(int i=n; i>0; i--){

        //loop to print stars on left
        for(int j=1; j<=i; j++){  
            cout<<"* ";
        } 
        
        //loop to print spaces
        for(int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }

        //loop to print stars on right
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    //loop to print lower half crown
    for(int i=1; i<=n; i++){

        //loop to print stars on left
        for(int j=1; j<=i; j++){  
            cout<<"* ";
        } 
        
        //loop to print spaces
        for(int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }

        //loop to print stars on right
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}