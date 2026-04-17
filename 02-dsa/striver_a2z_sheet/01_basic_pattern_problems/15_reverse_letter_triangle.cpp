// Problem Statement: Given an integer n, print the following output
// A B C D E 
// A B C D
// A B C
// A B
// A

// Approach:
// Run an outer loop (i) from 1 to n to handle rows.
// Run an inner loop (ch) from 'A' to 'A'+n-i
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

    for(int i=1; i<=n; i++){
        for(char ch = 'A'; ch<='A'+n-i; ch++){  //i can give character range too (learnt something new)
            cout<<ch<<" ";
        }  
        cout<<endl;
    }

    return 0;
}