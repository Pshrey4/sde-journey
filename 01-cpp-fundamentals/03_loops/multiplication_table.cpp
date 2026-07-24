#include<iostream>

int main(){
    
    int i, num;

    std::cout<<"Which multiplication table do you want?: ";
    std::cin>>num;

    for(i=1; i<=10; i++){
        std::cout<<num<<" X "<<i<<" = "<<num*i<<std::endl;
    }

    return 0;
}