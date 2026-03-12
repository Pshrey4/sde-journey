#include<iostream>
int main(){
    int sum, n_nos;
    std::cout<<"How many numbers sum do you need?\n";
    std::cin>>n_nos;
    sum = (n_nos * (n_nos + 1)) / 2;
    std::cout<<"Sum of first "<<n_nos<<" natural numbers is "<<sum<<std::endl;
    return 0;
}