#include<iostream>
 
int main(){
    int nat_num, i =1, sum = 0;

    std::cout<<"Enter a natural number: ";
    std::cin>>nat_num;

    while(i<=nat_num){
        sum += i;
        i++;
    }

    std::cout<<"Sum of first "<<nat_num<<" natural numbers: "<<sum<<std::endl;

    return 0;

}