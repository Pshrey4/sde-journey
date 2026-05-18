// Problem: Given an integer n, write a program to print numbers from 1 to n.

// Approach:
// Take the starting number (1) and ending number (n) as input.
// If the current number becomes greater than n, stop recursion.
// Print the current number.
// Call the function again with the next number (a + 1).

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>

// Forward recursion
// Print before recursive call
void print_one_to_n(int a, int b){
    if(a>b){
        return;
    }

    std::cout<<a<<" ";

    print_one_to_n(a+1, b);
}

// Backtracking
// Print after recursive call
// void print_one_to_n(int b){
//     if(b==0){
//         return;
//     }

//     print_one_to_n(b-1);

//     std::cout<<b<<" ";
// }

int main(){
    int n, count = 1;

    std::cout<<"Enter a number: ";
    std::cin>>n;

    // Function call for forward recursion
    print_one_to_n(count, n);

    // Function call for backtracking
    // print_one_to_n(n);

    std::cout<<std::endl;
    
    return 0;
}