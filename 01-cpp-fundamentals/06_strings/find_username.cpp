#include<iostream>
#include<string>

int main(){
    std::string email, username;
    int symbol;

    std::cout<<"Enter your email address: ";
    std::cin>>email;

    symbol = email.find('@');

    username = email.substr(0, symbol);

    std::cout<<"Username: "<<username<<std::endl;

    return 0;
}