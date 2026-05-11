// Problem Statement: Given an integer n, print the following output
// E
// D E
// C D E
// B C D E
// A B C D E

// Approach:
// Iterate from i = n-1 to 0 to process each row.
// Initialize a character variable ch = 'A'+i.
// Innerloop iterate from j = n-1 to j>=i.
// Print ch and then increment it.
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

    for(int i=n-1; i>=0; i--){
        char ch = 'A'+i;

        for(int j=n-1; j>=i; j--){  
            cout<<ch<<" ";
            ch++;
        }  

        cout<<endl;
    }

    return 0;
}