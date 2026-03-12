#include<iostream>
#include<cmath>

int main(){

    float radius, area;

    std::cout<<"Enter radius of circle ";
    std::cin>>radius;

    area = 3.14f * pow(radius, 2);
    std::cout<<"Area of circle is "<<area<<std::endl;

    return 0;
}