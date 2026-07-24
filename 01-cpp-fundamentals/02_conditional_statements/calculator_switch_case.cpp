#include<iostream>
int main(){
    std::cout<<"Arithmetic Operations: "<<std::endl;
    std::cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<"5. Modulus\n"<<std::endl;

    int a, b, c;
    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>>a>>b;

    int operation;
    std::cout<<"Which operation you wish to perform?: ";
    std::cin>>operation;

    switch(operation){
        case 1:
            c = a + b;
            break;
        case 2:
            c = a - b;
            break;
        case 3:
            c = a * b;
            break;
        case 4:
            c = a / b;
            break;
        case 5:
            c = a % b;
            break;
        default:
            std::cout<<"This operation doesnt exist."<<std::endl;
            break;
    }

    std::cout<<"Result of your operation is "<<c<<std::endl;

    return 0;

}