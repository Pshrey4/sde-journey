// Problem: Given a number n, find out the sum of the first n natural numbers .

// Approach:
// Take sum, current number, and n as parameters.
// If current becomes greater than n, return the final sum.
// Add the current number to sum.
// Call the function again with current + 1 to process the next number.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>

// Method 1:
int sum_of_nos(int sum, int current, int n){
    if(current>n){
        return sum;
    }

    sum += current;

    return sum_of_nos(sum, current+1, n);
}

// Method 2: 
// int sum_of_nos(int n){
//     if(n==1){
//         return 1;
//     }

//     return n + sum_of_nos(n-1);
// }

int main(){
    int n;

    std::cout<<"Enter a natural number: ";
    std::cin>>n;

    if(n<1){
        std::cout<<"Invalid Input"<<std::endl;
        return 0;
    }

    int sum = 0, current = 1;

    // Using brute force or for loop
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }

    // Using mathematical formula
    // sum = (n * (n + 1)) / 2;

    // Using recursion
    // Function call method 1
    sum = sum_of_nos(sum, current, n);

    // Function call method 2:
    // sum = sum_of_nos(n);

    std::cout<<"Sum of first "<<n<<" natural numbers: "<<sum<<std::endl;

    return 0;
}