#include<iostream>
#include<cstring>
#include<limits>
//include header file cstring for string functions

int main(){
    //length of string using strlen function
    char s[50] = "Hello World!";
    std::cout<<"Length of a string using strlen: "<<strlen(s)<<std::endl;
    std::cout<<std::endl;

    //length by taking pointer to a string
    char *p = new char[100];
    //char *p; needs a valid memory that it points to before taking an input
    //therefore assigned it a memory location at runtime
    std::cout<<"Enter a string: ";
    std::cin>>p;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Length of string pointed by pointer p: "<<strlen(p)<<std::endl;
    std::cout<<std::endl;

    //length by taking pointer to a string 
    //using getline function to take input
    char *q = new char[100];
    std::cout<<"Enter a string: ";
    std::cin.getline(q, 100);
    std::cout<<"Length of string pointed by pointer q: "<<strlen(q)<<std::endl;
    std::cout<<std::endl;

    //concatenating a string
    char str1[20] = "Hello";
    char str2[20] = "World";
    std::cout<<"Concatenated string: "<<strcat(str1, str2)<<std::endl;
    std::cout<<std::endl;

    //concatenating only few characters from string
    std::cout<<"Concatenated string: "<<strncat(str1, str2, 3)<<std::endl;
    std::cout<<std::endl;

    //copying a string
    char str3[20];
    std::cout<<"str3 = "<<strcpy(str3, str1)<<std::endl;
    std::cout<<std::endl;

    //copying only few characters from string
    char str4[20];
    std::cout<<"str4 = "<<strncat(str4, str1, 4)<<std::endl;
    std::cout<<std::endl;

    return 0;
}