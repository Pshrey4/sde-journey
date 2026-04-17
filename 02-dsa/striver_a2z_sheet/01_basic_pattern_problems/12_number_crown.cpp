// Problem Statement: Given an integer n, print the following output
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

// Approach:
// Loop from 1 to n to handle each row.
// Print increasing numbers from 1 to i on the left side of the row.
// Print the current number of spaces in the middle.
// Print decreasing numbers from i to 1 on the right side of the row.
// Reduce the number of middle spaces by 2 after each row.
// Move to the next line after completing the row.

// Complexity Analysis:
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int spaces = 2*(n-1);

    for(int i=1; i<=n; i++){
        
        //loop to print left part of row
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }

        //loop to print spaces
        for(int j=1; j<=spaces; j++){
            cout<<"  ";
        }

        //loop to print right side
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }

        //decrease spaces by 2 after each row
        spaces -= 2;

        cout<<endl;
    }

    return 0;
}