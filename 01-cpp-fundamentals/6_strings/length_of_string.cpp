#include<iostream>
#include<string>

int main(){
    std::string str = "programming";

    //method 1: using class string length
    std::cout<<"Length of string using length() function: "<<str.length()<<std::endl;
    std::cout<<std::endl;

    //method 2: using for loop
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    std::cout<<"Length of string using for loop: "<<str.length()<<std::endl;
    std::cout<<std::endl;

    return 0;
}