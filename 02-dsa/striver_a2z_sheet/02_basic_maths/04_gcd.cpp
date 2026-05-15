// Problem Statement: Given two integers n1 and n2, find their greatest common divisor.

// Approach:
// Take two numbers as input from the user.
// Find the smaller number between the two numbers.
// Iterate from 1 to the smaller number and check for common divisors.
// Store the largest common divisor found as the GCD.

// Complexity Analysis:
// Time Complexity: O(min(n1, n2))
// Space Complexity: O(1)

#include<iostream>

int main(){

    int n1, n2;

    std::cout<<"Enter first number: ";
    std::cin>>n1;

    std::cout<<"Enter second number: ";
    std::cin>>n2;

    int n;

    if(n1<n2){
        n = n1;
    }
    else{
        n = n2;
    }

    int gcd = 1;

    for(int i = 1; i<=n; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    // Method 2: Iterate downwards from min(n1, n2) to 1
    // This will reduce the number of iterations of the loop
    // for(int i=n; i>=1; i--){
    //     if(n1 % i == 0 && n2 % i == 0){
    //         gcd = i;
    //         break;
    //     }
    // }

    // Method 3: Euclidean Algorithm
    // To find the GCD of n1 and n2 where n1 > n2:
    // 1. Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
    // 2. Once one becomes 0, the other is the GCD of the original numbers.
    // while(n1!=0 && n2!=0){
    //     if(n1>n2){
    //         n1 = n1 - n2;
    //     }
    //     else{
    //         n2 = n2 - n1;
    //     }

    //     if(n1 == 0 || n2 == 0){
    //         gcd = std::max(n1, n2);
    //     }
    // }
    // std::cout<<"GCD: "<<gcd<<std::endl;

    std::cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd<<std::endl;
    
    return 0;
}