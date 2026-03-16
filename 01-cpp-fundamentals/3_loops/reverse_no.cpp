#include<iostream>

int main(){
    int rem, num, rev=0;

    std::cout<<"Enter a number: ";
    std::cin>>num; 

    while(num!=0){
        rem = num % 10;
        num /= 10;
        rev = rev*10 + rem;
    }

    std::cout<<"Reverse: "<<rev<<std::endl;

    return 0;
}