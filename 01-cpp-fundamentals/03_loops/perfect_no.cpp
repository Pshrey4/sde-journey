#include<iostream>

int main(){
    int num, i, sum=0;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    for(i=1; i<=num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    std::cout<<"Sum of factors of "<<num<<" is "<<sum<<std::endl;

    if(sum == 2*num){
        std::cout<<num<<" is a perfect number."<<std::endl;
    }
    else{
        std::cout<<num<<" is not a perfect number."<<std::endl;
    }

    return 0;
}