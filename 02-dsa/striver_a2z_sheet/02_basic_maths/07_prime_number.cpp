// Problem Statement: Given an integer N, check whether it is prime or not.

// Approach:
// Take a positive integer as input from the user.
// Iterate from 1 to the number and count how many numbers divide it completely.
// If the count of divisors is exactly 2, the number is prime.
// Otherwise, the number is not prime.

// Complexity Analysis:
// Time Complexity: O(n)
// Space Complexity: O(1)

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

    int counter = 0;

    for(int i = 1; i<=number; i++){
        if(number % i == 0){
            counter++;
        }
    }

    // Method 2: Square root method
    // Iterate only from 1 to sqrt(n).
    // If i divides n, then both i and n/i are divisors.
    // This reduces unnecessary iterations and improves efficiency. 
    // for(int i=1; i*i<=number; i++){
    //     if(number % i == 0){
    //         counter++;
    //     }
    //     if(i != number / i){
    //         counter++;
    //     }
    // }

    if(counter == 2){
        std::cout<<"Prime number"<<std::endl;
    }
    else{
        std::cout<<"Not a prime number"<<std::endl;
    }
    
    return 0;
}

