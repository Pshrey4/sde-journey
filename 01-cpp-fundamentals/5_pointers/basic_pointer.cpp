#include<iostream>

int main(){
    int a = 10;

    //declaration + initialization of pointer
    int *p = &a; 

    //value stored inside data variable 'a'
    std::cout<<"Value of a: "<<a<<std::endl;

    //address of variable 'a'
    std::cout<<"Address of a: "<<&a<<std::endl;

    //value stored inside pointer variable 'p'
    std::cout<<"Value of p: "<<p<<std::endl;

    //address of pointer variable 'p'
    std::cout<<"Adress of p: "<<&p<<std::endl;

    //pointer variable 'p' points towards data variable 'a'
    //dereferncing pointer variable 'p' allows us to access contents stored in data variable 'a'
    std::cout<<"Value that p points towards: "<<*p<<std::endl;

    return 0;
}