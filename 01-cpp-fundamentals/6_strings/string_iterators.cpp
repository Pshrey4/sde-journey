#include<iostream>
#include<string>

int main(){
    std::string str = "programming";

    //string iterator
    //create an object it_str of type iterator
    std::string::iterator it_str;

    //iterate through string str using for loop
    for(it_str=str.begin(); it_str!=str.end(); it_str++){
        std::cout<<*it_str;
    }
    std::cout<<std::endl;

    //print entire string in capital letters
    for(it_str=str.begin(); it_str!=str.end(); it_str++){
        std::cout<<char(*it_str - 32); //typecast it back to char
    }
    std::cout<<std::endl;

    //reverse iterator iterates from end of string
    //create an object rit_str of type reverse_iterator
    std::string::reverse_iterator rit_str;

    //iterate through string str using for loop
    for(rit_str=str.rbegin(); rit_str!=str.rend(); rit_str++){
        std::cout<<*rit_str;
    }
    std::cout<<std::endl;

    //print entire string in capital letters
    for(rit_str=str.rbegin(); rit_str!=str.rend(); rit_str++){
        std::cout<<char(*rit_str - 32);
    }
    std::cout<<std::endl;

    //using for loop to traverse a string
    for(int i = 0; str[i]!='\0'; i++){
        std::cout<<str[i];
    }
    std::cout<<std::endl;

    //print string in captial letters using for loop
    for(int i = 0; str[i]!='\0'; i++){
        std::cout<<char(str[i]-32);
    }
    std::cout<<std::endl;

    //print uppercase by using toupper() function
    //we have to include header file cctype
    for(it_str=str.begin(); it_str!=str.end(); it_str++){
        std::cout<<char(toupper(*it_str)); 
    }
    std::cout<<std::endl;
    
    return 0;
}