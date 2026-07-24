#include<iostream>

int main(){

    //allocating array of size 5  to p
    int *p = new int[5];

    //allocation variable to q
    int *q = new int;

    //assigning value to single variable
    std::cout<<"Enter value: ";
    std::cin>>*q;
    std::cout<<"Value of q: "<<*q<<std::endl;

    //assigning value to array
    std::cout<<"Enter value: ";
    std::cin>>p[3];
    std::cout<<"Values of array: "<<std::endl;
    for(int i=0; i<5; i++){
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";

    //deallocating memory of single variable
    delete q;

    //deallocating memory of array
    delete[] p;

    return 0;
}