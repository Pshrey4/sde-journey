#include<iostream>
#include<limits>

int main(){

    //here if you enter more than one word the cin function will not read
    char c[20];
    std::cout<<"Enter your name : "<<std::endl;
    std::cin>>c;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Hello "<<c<<std::endl;

    std::cout<<std::endl;

    //to get all the that have been input by the user
    char s[100];
    std::cout<<"Enter your name: "<<std::endl;
    std::cin.get(s, 20);
    //std::getline(std::cin, good_name);
    //std::cin.getline(s, 20);
    std::cout<<"Welcome "<<s<<std::endl;
    


    return 0;
}