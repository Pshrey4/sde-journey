#include<iostream>
#include<string>

int main(){
    //initializing single char
    char x = 'A';
    std::cout<<"Single character initialization: x="<<x<<std::endl;

    //initializing char array with size
    char A[10] = "Hello";
    std::cout<<"char array with size initialization: A[10] = "<<A<<std::endl;

    //initializing char array without size
    char B[] = "World";
    std::cout<<"char array without size initialization: B[] = "<<B<<std::endl;

    //initalizing char array with list of elements
    char C[] = {'A', 'B', 'C', 'D', '\0'};
    std::cout<<"Another method of creating string: C[] = {'A', 'B', 'C', 'D'} gives "<<C<<std::endl;

    //initializing using ASCII values
    char D[] = {65, 66, 67, 68, '\0'};
    std::cout<<"Initialized using ASCII values: D[] = {65, 66, 67, 68} gives "<<D<<std::endl;

    //string literal
    char *S = "C++ World";
    std::cout<<"String literal: "<<S<<std::endl;

    //above were the string initialization methods using char array
    //but it is always preferred to use string class to declare and initialize strings
    //for that you will have to include header #include<string>
    std::string str = "Hello World!";
    std::cout<<"String str = "<<str<<std::endl;

    //in my code i dont do using namespace std so i have to mention std:: everywhere

    return 0;
}