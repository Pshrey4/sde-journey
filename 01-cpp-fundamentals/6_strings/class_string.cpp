#include<iostream>
#include<string>

int main(){
    //declaring and initializing a string
    std::string s = "Hello";
    std::cout<<"String s: "<<s<<std::endl;
    std::cout<<std::endl;

    //taking string as input using getline
    std::string str;
    std::cout<<"Enter a string: ";
    std::getline(std::cin, str);
    std::cout<<"String str: "<<str<<std::endl;
    std::cout<<std::endl;

    return 0;
}