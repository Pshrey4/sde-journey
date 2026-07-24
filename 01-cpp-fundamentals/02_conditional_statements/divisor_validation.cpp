#include<iostream>

int main(){

    int divisor, dividend, quotient, remainder;

    std::cout<<"Enter divisor: ";
    std::cin>>divisor;
    std::cout<<"Enter dividend: ";
    std::cin>>dividend;

    if(divisor == 0){
        std::cout<<"Invalid divisor."<<std::endl;
    }
    else{
        quotient = dividend / divisor;
        std::cout<<"Quotient is "<<quotient<<std::endl;
        remainder = dividend % divisor;
        std::cout<<"Remainder is "<<remainder<<std::endl;
    }
    
    return 0;

}