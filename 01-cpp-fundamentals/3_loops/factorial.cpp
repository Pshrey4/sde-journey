#include<iostream>

int main(){
    int i = 1, num, fact = 1;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    if(num == 0 || num == 1){
        std::cout<<"Factorial of "<<num<<": "<<fact<<std::endl;
    }
    else{
        do{
            fact *= i;
            i++;
        }while (i<=num);

        std::cout<<"Factorial of "<<num<<": "<<fact<<std::endl;
    }
 
    return 0;
}