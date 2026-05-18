// Problem: Given an integer n, write a program to print your name n times.

// Approach:
// Take the name and number n as input.
// If n == 0, stop recursion using return.
// Print the name once.
// Call the function again with n-1 to print the remaining times.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<string>

void print_name(const std::string &name, int n){
    // Why use const std::string &name instead of std::string name?
    // Passing std::string name creates a new copy of the string in every function call.
    // Using & passes the reference to the original string, avoiding unnecessary copying.
    // const ensures that the function cannot modify the original string.
      
    if(n == 0) {
        return;
    }

    std::cout<<name<<std::endl;

    print_name(name, n-1);

}

int main(){

    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;

    std::string name = "Taylor Swift";

    print_name(name, n);
    
    return 0;
}