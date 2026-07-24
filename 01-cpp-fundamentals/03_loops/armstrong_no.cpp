#include<iostream>
#include<cmath>

int main(){
    int rem, num, quo, sum=0;

    std::cout<<"Enter a number: ";
    std::cin>>num; 

    quo = num;

    while(quo!=0){
        rem = quo % 10;
        sum += pow(rem, 3);
        quo /= 10;
    }

    if(sum == num){
        std::cout<<num<<" is an armstrong number."<<std::endl;
    }
    else{
        std::cout<<num<<" is not an armstrong number."<<std::endl;
    }

    return 0;
}