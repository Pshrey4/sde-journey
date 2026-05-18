// Probelm: Fibonacci Sequence

// Approach:
// Handle invalid input if n is negative.
// Create an array to store Fibonacci numbers.
// Initialize the first two Fibonacci numbers as 0 and 1.
// Use a loop to calculate the remaining Fibonacci numbers using the previous two values.
// Traverse the array and print the Fibonacci series.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>

// Method 1 function
// int fib_seq(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib_seq(n-1) + fib_seq(n-2);    
// }

int main(){
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;

    if(n<0){
        std::cout<<"Invalid Input"<<std::endl;
        return 0;
    }

    // Method 1: Iterative
    // for(int i=0; i<=n; i++){
    //     std::cout<<fib_seq(i)<<std::endl;
    // }

    // Method 2: Fibonacci array
    int fib_arr[n+1];

    if(n == 0){
        fib_arr[0] = 0;
        std::cout<<"Fibonacci Series: "<<std::endl;
        std::cout<<fib_arr[0]<<std::endl;
        return 0;
    }
    else{
        fib_arr[0] = 0;
        fib_arr[1] = 1;
        for(int i=2; i<=n; i++){
            fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
        }
    }

    std::cout<<"Fibonacci Series: "<<std::endl;
    for(int i=0; i<=n; i++){
        std::cout<<fib_arr[i]<<" ";
    }
    std::cout<<std::endl;  
   
    return 0;
}