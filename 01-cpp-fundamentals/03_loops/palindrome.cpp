#include<iostream>

int main(){
    int rem, num, m, rev=0;

    std::cout<<"Enter a number: ";
    std::cin>>num; 

    m = num;

    while(m!=0){
        rem = m % 10;
        m /= 10;
        rev = rev*10 + rem;
    }

    if(rev==num){
        std::cout<<num<<" is palindrome."<<std::endl;
    }
    else{
        std::cout<<num<<" is not palindrome."<<std::endl;
    }
  
    return 0;
}