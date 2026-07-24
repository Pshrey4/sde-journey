#include<iostream>

//here we give default value c=0
int sum(int a, int b, int c=0){
    return a+b+c;
}

int main(){
    std::cout<<"Sum of two numbers: "<<sum(10,15)<<std::endl;

    std::cout<<"Sum of three numbers: "<<sum(10,15,20)<<std::endl;

    return 0;
}