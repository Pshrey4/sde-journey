#include<iostream>
int main(){
    int year;
    
    std::cout<<"Enter year: ";
    std::cin>>year;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                std::cout<<"Leap year"<<std::endl;
            }
            else{
                std::cout<<"Not leap year"<<std::endl;
            }
        }
        else{
            std::cout<<"Leap year"<<std::endl;
        }
    }
    else{
        std::cout<<"Not leap year"<<std::endl;
    }

    return 0;
}