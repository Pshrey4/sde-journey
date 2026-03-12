#include<iostream>
int main(){

    //Maximum of two numbers
    int x, y;
    std::cout<<"Enter two numbers: ";
    std::cin>>x>>y;
    if(x>y){
        std::cout<<"Maximum is "<<x<<std::endl;
    }
    else {
        std::cout<<"Maximum is "<<y<<std::endl;
    }
    return 0;
}