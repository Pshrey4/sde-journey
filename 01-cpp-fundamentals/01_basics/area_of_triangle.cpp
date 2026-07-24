#include<iostream>
int main(){
    float area, base, height;
    std::cout<<"Enter base and height of a triangle "<<std::endl;
    std::cin>>base>>height;
    area = (base * height) / 2;
    std::cout<<"Area of triangle is "<<area<<" units."<<std::endl;
    return 0;
}