// Problem Statement: Given an integer n, print the following output
// * 
// * * 
// * * * 
// * * * *
// * * *
// * *  
// * 

// Approach:
// Run an outer loop from 1 to 2n-1 to handle rows.
// For each row i, contains i stars until i>n one less star than row above
// Take variable stars = i and when i>n stars = 2*n-i
// Run an inner loop from 1 to stars, to print *

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<2*n; i++){
        int stars = i;

        if(i>n){
            stars = 2*n-i;
        }

        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}