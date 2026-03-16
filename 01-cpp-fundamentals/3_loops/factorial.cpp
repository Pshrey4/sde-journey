#include<iostream>

int main(){
    int i = 1, num, fact = 1;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    do{
        fact *= i;
        i++;
    }while (i<=num);

    std::cout<<"Factorial of "<<num<<": "<<fact<<std::endl;

    return 0;
    
    
}