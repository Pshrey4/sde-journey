#include<iostream>

int main(){
    int num, i, count = 0;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    for(i=1; i<=num; i++){
        if(num % i == 0){
            count++;
        }
    }

    if(count == 2){
        std::cout<<num<<" is a prime number."<<std::endl;
    }
    else{
        std::cout<<num<<" is not a prime number."<<std::endl;
    }

    return 0;
}