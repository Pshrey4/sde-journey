#include<iostream>

//function to add two numbers
//function initialization
int add(int a, int b){
    return a + b;
}

int main(){
    int x, y, z;

    std::cout<<"Enter two numbers: ";
    std::cin>>x>>y;

    //function call
    z = add(x, y);

    std::cout<<"Sum: "<<z<<std::endl;

    return 0;
}