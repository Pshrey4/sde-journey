#include<iostream>

//enum is used for defining a set on constants under one name
enum day {mon, tue, wed, thur, fri, sat, sun}; 
enum dept {cs=1, ece, it, mech};
//enum can be used instead of
//#define mon 0 or
//const int mon = 0
//when we want to define a set of constants

//tyedef is used to give alias to any data type 
typedef int marks;

int main(){

    //variables of type day can only take the few values given in the list
    day d = mon;
    std::cout<<d<<std::endl;
    std::cout<<sun<<std::endl;

    //variables in dept list start from constant 1
    dept dep = cs;
    std::cout<<dep<<std::endl;
    std::cout<<mech<<std::endl;

    //here variables of type marks are integer variables
    marks m1, m2, m3;
    m1 = 10, m2 = 3;
    m3 = m1 / m2;
    std::cout<<m3<<std::endl;
    

    return 0;
}