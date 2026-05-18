// Problem: Given a number n,  print its factorial.

// Approach:
// Take the number n as input.
// If n becomes 1, return 1 as the base case.
// Multiply n with factorial(n-1).
// Repeat recursively until the base case is reached.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>

// Recursive Method
int factorial(int n){
    if(n==1){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;

    if(n<1){
        std::cout<<"Invalid Input"<<std::endl;
        return 0;
    }

    // Recursive Function Call
    int fact = factorial(n);

    // Iterative Method:
    // int fact = 1;
    // for(int i = n; i>=1; i--){
    //     fact *= i;
    // }

    std::cout<<"Factorial of "<<n<<": "<<fact<<std::endl;

    return 0;
}