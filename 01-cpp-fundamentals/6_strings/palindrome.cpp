#include<iostream>
#include<string>

int main(){
    std::string str1, str2="";
    std::cout<<"Enter a string: ";
    std::cin>>str1;
    int len_str1 = str1.length();

    for(int i=len_str1-1; i>=0; i--){
        str2.push_back(str1[i]);
    }

    if(str1.compare(str2)==0){
        std::cout<<"String is palindrome."<<std::endl;
    }
    else{
        std::cout<<"String is not palindrome."<<std::endl;
    }

    return 0;
}