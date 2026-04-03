// Problem: Fizz Buzz
// https://leetcode.com/problems/fizz-buzz/description/

#include<iostream>
#include<string>

int main(){
    int n;

    std::cout<<"Enter value of n: ";
    std::cin>>n;

    std::string array[n];

    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            array[i-1] = "FizzBuzz";
        }
        else if(i%3==0){
            array[i-1] = "Fizz";
        }
        else if(i%5==0){
            array[i-1] = "Buzz";
        }
        else{
            array[i-1] = std::to_string(i);
        }
    }

    for(int i=0; i<n; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;
    
    //If you want ouput as below then use this code
    //["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"]
    // std::cout << "[";

    // for(int i = 0; i < n; i++){
    //     std::cout << "\"" << array[i] << "\"";

    //     if(i != n - 1){
    //         std::cout << ", ";
    //     }
    // }

    // std::cout << "]" << std::endl;   

    return 0;  
}