#include<iostream>

int main(){
    int i = 1, n;
    std::cout<<"Enter value of n: ";
    std::cin>>n;

    //Displaying n numbers using while loop
    while(i<=n){
        std::cout<<i<<" ";
        i++;
    }

    //resetting the value of i to 1
    i = 1;

    //going to new line 
    std::cout<<std::endl;

    //DIsplaying n numbers using do..while loop
    do{
        std::cout<<i<<" ";
        i++;
    } while(i <= n);

    return 0;
}