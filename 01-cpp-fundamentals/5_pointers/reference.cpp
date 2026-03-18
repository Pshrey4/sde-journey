#include<iostream>

int main(){
    int x = 10;
    int &y = x;

    std::cout<<"Value of x: "<<x<<std::endl;
    std::cout<<"Value of y: "<<y<<std::endl;

    y++;
    std::cout<<"After incrementing y, value of x: "<<x<<std::endl;

    x++;
    std::cout<<"After incrementing x, value of y: "<<y<<std::endl;

    return 0;
}