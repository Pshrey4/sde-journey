#include<iostream>
#include<string>

int main(){
    std::string str = "Hello";

    //length of string
    std::cout<<"Length of string str: "<<str.length()<<std::endl;

    //size of string
    std::cout<<"Size of string str: "<<str.size()<<std::endl;

    //capacity of string
    //capacity is the memory assigned to string
    //depend from compiler to compiler
    std::cout<<"Capacity of string str: "<<str.capacity()<<std::endl;

    //resizing capacity of string
    str.resize(100);
    std::cout<<"Capacity of string str after resizing: "<<str.capacity()<<std::endl;

    //maximum possible size of string in compiler
    std::cout<<"Maximum possible size of string str in compiler: "<<str.max_size()<<std::endl;

    //clearing a string
    str.clear();
    std::cout<<"Length of string str after clear(): "<<str.length()<<std::endl;

    //checking if string is empty
    if(str.empty()){
        std::cout<<"String str is empty"<<std::endl;
    }
    else{
        std::cout<<"String str is not empty"<<std::endl;
    }

    std::cout<<std::endl;

    //appending to a string
    //append function appends to end of string
    std::string str1 = "Hello";
    std::cout<<"String str1 before appending: "<<str1<<std::endl;
    std::cout<<"Capacity of string str1 before appending: "<<str1.capacity()<<std::endl;
    str1.append(" World! How are you?");
    std::cout<<"String str1 after appending: "<<str1<<std::endl;
    std::cout<<"Capacity of string str1 after appending: "<<str1.capacity()<<std::endl;
    std::cout<<std::endl;

    //inserting in a string
    std::string str2 = "How you?";
    std::cout<<"String str2 before inserting: "<<str2<<std::endl;
    str2.insert(3, " are");
    std::cout<<"String str2 after first inserting: "<<str2<<std::endl;
    str2.insert(11, " sebastian ", 4);
    std::cout<<"String str2 after second inserting: "<<str2<<std::endl;
    std::cout<<std::endl;

    //replacing part of string
    str2.replace(3, 10, "HH");
    std::cout<<"String str2 after replcaing: "<<str2<<std::endl;
    std::cout<<std::endl;
    
    //erasing a string
    str2.erase();
    std::cout<<"String str2 after erasing: "<<str2<<std::endl;
    std::cout<<std::endl;

    //pushing character at back of string
    std::string str3 = "Hello";
    std::cout<<"String str3 before push back: "<<str3<<std::endl;
    str3.push_back('z');
    std::cout<<"String str3 after push back: "<<str3<<std::endl;
    std::cout<<std::endl;

    //popping last character from string
    std::cout<<"String str3 before pop back: "<<str3<<std::endl;
    str3.pop_back();
    std::cout<<"String str3 after pop back: "<<str3<<std::endl;
    std::cout<<std::endl;

    //swapping str3 and str4
    std::string str4 = "World";
    std::cout<<"String str3 before swapping: "<<str3<<std::endl;
    std::cout<<"String str4 before swapping: "<<str4<<std::endl;
    str3.swap(str4);
    std::cout<<"String str3 after swapping: "<<str3<<std::endl;
    std::cout<<"String str4 after swapping: "<<str4<<std::endl;
    std::cout<<std::endl;

    //copying string to array
    char s_array[10];
    str4.copy(s_array, str4.length()); //copies entire string
    //str4.copy(s_array, 4); //only copies first 4 characters
    std::cout<<"Character array: "<<s_array<<std::endl;
    std::cout<<std::endl;

    //finding a string inside a string
    std::string str5 = "How are you?";
    if(str5.find("are")>=0){
        std::cout<<"Found at location: "<<str5.find("are")<<std::endl;
    }
    else{
        std::cout<<"Not found"<<std::endl;
    }
    std::cout<<std::endl;

    //finding a character inside a string
    if(str5.find("o")>=0){
        std::cout<<"Found at location: "<<str5.find("o")<<std::endl;
    }
    else{
        std::cout<<"Not found"<<std::endl;
    }
    std::cout<<std::endl;

    //finding from right end of string
    if(str5.rfind("o")>=0){
        std::cout<<"Found from right end at location: "<<str5.rfind("o")<<std::endl;
    }
    else{
        std::cout<<"Not found"<<std::endl;
    }
    std::cout<<std::endl;

    //first occurence of letter in string
    std::cout<<"Found first occurence at location: "<<str5.find_first_of("o")<<std::endl;
    //str5.find_first_of("o", 4) this is from starting index 4 i.e will serach for 'o' from index 4 onwards in string

    //last occurrence of letter in string
    std::cout<<"Found last occurence at location: "<<str5.find_last_of("o")<<std::endl;

    //find_first_of() and find_last_of() can also be used with more than one character

    std::cout<<std::endl;

    //function returing substring of a string
    std::string str6 = "Programming";
    std::cout<<"Substring from index 3: "<<str6.substr(3)<<std::endl;
    std::cout<<"Substring from index 3 with length 4: "<<str6.substr(3, 4)<<std::endl;
    std::cout<<std::endl;

    //comparing two strings
    std::string str_1, str_2;
    std::cout<<"Enter string 1: ";
    std::getline(std::cin, str_1);
    std::cout<<"Enter string 2: ";
    std::getline(std::cin, str_2);
    if(str_1.compare(str_2) == 0){
        std::cout<<"Both strings are same."<<std::endl;
    }
    else if(str_1.compare(str_2) > 0){
        std::cout<<"String 1 is greater than string 2."<<std::endl;
    }
    else{
        std::cout<<"String 2 is greater than string 1."<<std::endl;
    }
    std::cout<<std::endl;

    return 0;
}