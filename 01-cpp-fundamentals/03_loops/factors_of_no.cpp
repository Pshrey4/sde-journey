#include<iostream>

int main(){
    int num, i;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    for(i=1; i<=num; i++){
        if(num % i == 0){
            std::cout<<i<<" is factor of "<<num<<std::endl;
        }
    }

    return 0;
}