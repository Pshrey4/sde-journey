#include<iostream>

//In this program I have 3 functions sum() but with different parameters

//function sum() to add 2 integers
int sum(int x, int y){
    return x + y;
}

//function sum() to add 3 integers
int sum(int x, int y, int z){
    return x + y + z;
}

//function sum() to add 2 floats
float sum(float x, float y){
    return x + y;
}

int main(){
    int a, b, c, d;

    std::cout<<"Enter two integer numbers: ";
    std::cin>>a>>b;

    c = sum(a, b);

    std::cout<<"c = "<<c<<std::endl;

    d = sum(a, b, c);

    std::cout<<"d = "<<d<<std::endl;

    float f1, f2, f3;

    std::cout<<"Enter two float numbers: ";
    std::cin>>f1>>f2;

    f3 = sum(f1, f2);

    std::cout<<"f3 = "<<f3<<std::endl;

    return 0;
}