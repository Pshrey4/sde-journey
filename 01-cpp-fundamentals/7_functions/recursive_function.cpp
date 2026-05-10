#include<iostream>

//In this function cout is before recursive call
void fun1(int a){
    if(a>0){
        std::cout<<a<<std::endl;
        fun1(a-1);
    }
}

//In this function cout is after recursive call
void fun2(int a){
    if(a>0){
        fun2(a-1);
        std::cout<<a<<std::endl;
    }
}

int main(){
    int x = 5;
    
    std::cout<<"cout before recursive call: "<<std::endl;
    fun1(x);

    std::cout<<"cout after recursive call: "<<std::endl;
    fun2(x);

    return 0;
}