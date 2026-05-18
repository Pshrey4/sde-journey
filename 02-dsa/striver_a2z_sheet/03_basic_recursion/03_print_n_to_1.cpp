// Problem: Given an integer n, write a program to print numbers from n to 1.

// Approach:
// Take the number n as input.
// If n becomes 0, stop recursion using return.
// Print the current value of n.
// Call the function again with n-1 to print the remaining numbers.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>

void print_n_to_1(int n){
    if(n==0){
        return;
    }

    std::cout<<n<<" ";

    print_n_to_1(n-1);
}

int main(){
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;

    print_n_to_1(n);

    std::cout<<std::endl;
    
    return 0;
}