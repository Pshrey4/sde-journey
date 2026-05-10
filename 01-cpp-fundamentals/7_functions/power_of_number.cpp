#include<iostream>

//function to calculate m power n
int  power_of_number(int m, int n){
    int temp = 1;

    for(int i=1; i<=n; i++){
        temp *= m;
    }

    return temp;
}

int main(){
    int number, power, result;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    std:: cout<<"Enter power of number: ";
    std::cin>>power;

    result = power_of_number(number, power);

    std::cout<<number<<" power "<<power<<" : "<<result<<std::endl;

    return 0;
}