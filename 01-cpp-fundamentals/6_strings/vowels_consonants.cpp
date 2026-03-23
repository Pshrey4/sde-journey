#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string str;
    char c;
    int vowels=0, words=0, consonants=0;

    std::cout<<"Enter a string: ";
    std::getline(std::cin, str);

    for(int i=0; str[i]!='\0'; i++){
        c = tolower(str[i]);

        if(c>='a' && c<='z'){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else{
            if(c==' ' && str[i+1]!=' '){
                words++;
            }
        }
    }

    std::cout<<"Number of vowels: "<<vowels<<std::endl;
    std::cout<<"Number of consonants: "<<consonants<<std::endl;
    std::cout<<"Number of words: "<<words+1<<std::endl;
    std::cout<<std::endl;

    return 0;
}