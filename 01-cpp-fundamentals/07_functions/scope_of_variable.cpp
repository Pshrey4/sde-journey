#include<iostream>

//global variable: can be accessed anywhere in the program and remians till end of program
int gvar = 10;

int x = 30;

int static_variable;

void local_var(){
    //local variable: can be accessed only in this function and remains till end of the function
    int lvar = 10;

    std::cout<<"Local variable: "<<lvar<<std::endl;

    //global variable can be accessed in this function
    gvar += lvar;
}

void static_var(){
    //static variable: it is initialized only once and remains throughout the program
    static int stat = 5;

    static_variable = stat;

    stat++;
}

int main(){
    std::cout<<"Global variable: "<<gvar<<std::endl;

    local_var();

    std::cout<<"Global variable after local_var() function: "<<gvar<<std::endl; 
    
    //C++ has block level scope
    int x = 10;
    {
        int x = 20;
        std::cout<<"Innermost block x="<<x<<std::endl;
    }
    std::cout<<"Main block x="<<x<<std::endl;

    std::cout<<"Golbal variable x="<<::x<<std::endl;

    static_var();

    std::cout<<"First function call static variable stat="<<static_variable<<std::endl;

    static_var();

    std::cout<<"Second function call static variable stat="<<static_variable<<std::endl;

    static_var();

    std::cout<<"Third function call static variable stat="<<static_variable<<std::endl;

    return 0;
}
