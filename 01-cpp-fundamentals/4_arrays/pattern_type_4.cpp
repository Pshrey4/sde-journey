#include<iostream>

int main(){
    int num;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    //method 1 by using if..else statement
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(j>=i){
                std::cout<<"* ";
            }
            else{
                std::cout<<"  ";
            }
        }
        std::cout<<"\n";
    }

    //method 2 using separate for loops for spaces and stars
    for(int i=0; i<num; i++){

        //print spaces
        for(int j=0; j<i; j++){
            std::cout<<"  ";
        }

        //print stars
        for(int j=0; j<num-i; j++){
            std::cout<<"* ";
        }

        std::cout<<"\n";
    }
    
    std::cout<<std::endl;

    return 0;
}