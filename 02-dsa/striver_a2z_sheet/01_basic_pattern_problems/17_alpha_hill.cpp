// Problem Statement: Given an integer n, print the following output
//       A
//     A B A
//   A B C B A
// A B C D C B A

// Approach:
// Iterate from i = 0 to n-1 to process each row.
// Initialize a character variable ch = 'A'.
// Print (n-i-1) spaces to center-align the pyramid.
// Calculate the midpoint of the row as breakpoint = (2 * i + 1) / 2.
// Iterate from j = 1 to 2 * i + 1 to print the characters:
// If j ≤ breakpoint, print ch and increment it.
// Else, decrement ch and print it.
// Print (n-i-1) spaces again (optional, as they don't affect output but maintain symmetry in code).
// Print a newline to move to the next row.

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
        char ch = 'A';

        //loop to print leading spaces
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }

        //breakpoint to change pattern
        int breakpoint = (2*i+1)/2;

        //loop to print letters
        for(int j=1; j<=2*i+1; j++){
            cout<<ch<<" ";

            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }

        //loop to print trailing spaces
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }

        cout<<endl;
    }

    return 0;
}