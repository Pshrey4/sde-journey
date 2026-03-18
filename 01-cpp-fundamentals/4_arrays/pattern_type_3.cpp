#include<iostream>

int main(){
    int num;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    //variation 1
    for(int i=0; i<num; i++){
        for(int j=num; j>i; j--){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
    
    //variation 2
    for(int i=num; i>0; i--){
        for(int j=0; j<i; j++){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }

    //variation 3
    for(int i=0; i<num; i++){
        for(int j=i; j<num; j++){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }

    return 0;
}