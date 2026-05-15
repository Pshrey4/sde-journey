// Problem Statement: Given an integer n, return all divisors of n.

// Approach:
// Take a positive integer as input from the user.
// Iterate from 1 to the number and check if each value divides the number completely.
// Store all numbers that divide the number without remainder in a vector.
// Traverse the vector and print all the divisors.

// Complexity Analysis:
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>

int main(){
    
    int number;

    std::cout<<"Enter a number: ";
    std::cin>>number;
    
    if(number<=0){
        std::cout<<"Invalid Input"<<std::endl;
        return 0;
    }

    std::vector <int> divisors;

    for(int i = 1; i<=number; i++){
        if(number % i == 0){
            divisors.emplace_back(i);
        }
    }

    // Method 2: Square root method
    // Iterate only from 1 to sqrt(n).
    // If i divides n, then both i and n/i are divisors.
    // Store both divisors if they are different to avoid duplicates.
    // This reduces unnecessary iterations and improves efficiency. 
    // for(int i=1; i*i<=number; i++){
    //     if(number % i == 0){
    //         divisors.emplace_back(i);
    //     }
    //     if(i != number / i){
    //         divisors.emplace_back(number/i);
    //     }
    // }

    std::cout<<"Divisors of "<<number<<" : "<<std::endl;

    for(int x:divisors){
        std::cout<<x<<" ";
    }

    std::cout<<std::endl;
    
    return 0;
}

