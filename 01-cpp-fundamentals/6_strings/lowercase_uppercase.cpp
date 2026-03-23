#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string str = "Programming";

    //convert string to lowercase
    for(int i=0; str[i]!='\0'; i++){
        std::cout<<char(tolower(str[i]));
    }
    std::cout<<std::endl;

    //convert string to uppercase
    for(int i=0; str[i]!='\0'; i++){
        std::cout<<char(toupper(str[i]));
    }
    std::cout<<std::endl;

    return 0;
}