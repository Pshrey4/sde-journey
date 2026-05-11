// Problem Statement: Given an integer n, print the following output
// 3 3 3 3 3 
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3 

// Approach:
// Iterate from i = 0 to i<(2*n-1) to process each row.
// Inside it, iterate from j = 0 to j<(2*n-1) to process each column.
// For every position (i, j):
// Calculate its distance from the top boundary.
// Calculate its distance from the left boundary.
// Calculate its distance from the right boundary.
// Calculate its distance from the bottom boundary.
// Take the minimum among all four distances.
// This minimum value represents the current layer of the pattern.
// Print (n - minimumDistance) at that position.
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

    for(int i=0; i<2*n-1; i++){

        for(int j=0; j<2*n-1; j++){

            //Calculate distance from top 
            int top = i;

            //Calculate distance from left
            int left = j;

            //Calculate distance from right
            int right = (2*n-2)-j;

            //Calculate distance from bottom
            int bottom = (2*n-2)-i;

            //Take minimum of all four distances
            int min_dist = min(min(top, bottom), min(left, right));

            //Print the number
            cout<<(n-min_dist)<<" ";

        }

        cout<<endl;

    }

    return 0;
}