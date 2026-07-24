#include<iostream>

int main(){
    int num_1, num_2;

    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>>num_1>>num_2;

    while(num_1 != num_2){
        if(num_1>num_2){
            num_1 -= num_2;
        }
        else{
            num_2 -= num_1;
        }
    }

    std::cout<<"GCD is "<<num_1<<std::endl;

    return 0;
}