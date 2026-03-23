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

    //finding substring of a string
    char s1[20] = "Programming";
    char s2[10] = "gram";
    if(strstr(s1, s2) != NULL){
        std::cout<<"Substring found: "<<strstr(s1, s2)<<std::endl;
        //prints from first occurrence of substring
    }
    else{
        std::cout<<"Substring not found"<<std::endl;
    }
    std::cout<<std::endl;

    //finding character in a string
    if(strchr(s1, 'g') != NULL){
        std::cout<<"Character found: "<<strchr(s1, 'g')<<std::endl;
        //prints from first occurrence of character
    }
    else{
        std::cout<<"Character not found"<<std::endl;
    }
    std::cout<<std::endl;

    //finding character in a string from right end
    if(strrchr(s1, 'r') != NULL){
        std::cout<<"Character found: "<<strrchr(s1, 'r')<<std::endl;
        //prints till first occurrence of character from right end
    }
    else{
        std::cout<<"Character not found"<<std::endl;
    }
    std::cout<<std::endl;

    //comparing two strings
    char str_1[100], str_2[100];
    std::cout<<"Enter string 1: ";
    std::cin.getline(str_1, 100);
    std::cout<<"Enter string 2: ";
    std::cin.getline(str_2, 100);
    if(strcmp(str_1, str_2) == 0){
        std::cout<<"Both strings are same."<<std::endl;
    }
    else if(strcmp(str_1, str_2) > 0){
        std::cout<<"String 1 is greater than string 2."<<std::endl;
    }
    else{
        std::cout<<"String 2 is greater than string 1."<<std::endl;
    }
    std::cout<<std::endl;

    //functions to convert string to numbers 
    //strtol(string, NULL, base): string to long, this function converts string to long int
    //strtof(string, NULL): string to float, this function converts string to float
    char a[10] = "255";
    char b[10] = "10.05";
    long int x = strtol(a, NULL, 10);
    float y = strtof(b, NULL);
    std::cout<<"Value of x: "<<x<<std::endl;
    std::cout<<"Value of y: "<<y<<std::endl;
    std::cout<<std::endl;

    //tokenization of string
    //strtok(string, "symbols") is used to tokenize a string based on symbols
    char x_y[100] = "l=10;m=20;n=30";
    char *token = strtok(x_y, ";");
    while(token!=NULL){
        std::cout<<token<<std::endl;
        token = strtok(NULL, ";");
    }
    std::cout<<std::endl;

    return 0;
}