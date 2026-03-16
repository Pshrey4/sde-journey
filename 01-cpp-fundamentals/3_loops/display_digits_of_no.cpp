#include<iostream>

int main(){
    int rem, num;

    std::cout<<"Enter a number: ";
    std::cin>>num; 

    while(num!=0){
        rem = num % 10;
        std::cout<<rem<<" ";
        num /= 10;
    }

    std::cout<<std::endl;

    return 0;
}