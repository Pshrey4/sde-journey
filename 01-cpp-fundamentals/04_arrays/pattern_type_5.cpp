#include<iostream>

int main(){
    int num;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    //method 1 by using if..else statement                     
    for(int i=num-1; i>=0; i--){
        for(int j=0; j<num; j++){
            if(i<=j){
                std::cout<<"* ";
            }
            else{
                std::cout<<"  ";
            }
        }
        std::cout<<"\n";
    }

    //method 2 using separate for loops for spaces and stars
    for(int i=num-1; i>=0; i--){

        //print spaces
        for(int j=0; j<i; j++){
            std::cout<<"  ";
        }

        //print stars
        for(int j=i; j<num; j++){
            std::cout<<"* ";
        }

        std::cout<<"\n";
    }

    return 0;
}