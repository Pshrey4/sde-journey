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

    //Maximum of three numbers
    int a, b, c;
    std::cout<<"Enter three numbers: ";
    std::cin>>a>>b>>c;
    if(a>b && a>c){
        std::cout<<"Maximum is "<<a<<std::endl;
    }
    else{
        if(b>a && b>c){
            std::cout<<"Maximum is "<<b<<std::endl;
        }
        else{
            std::cout<<"Maximum is "<<c<<std::endl;
        }
    }
    return 0;
}