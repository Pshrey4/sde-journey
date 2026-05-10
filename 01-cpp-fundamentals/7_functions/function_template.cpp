#include<iostream>

template<class data_type>
data_type min_num(data_type x, data_type y){
    if(x < y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    std::cout<<"Minimum of 10 & 7 is "<<min_num(10, 7)<<std::endl;

    std::cout<<"Minimum of 5.5 & 6.7 is "<<min_num(5.5f, 6.7f)<<std::endl;

    return 0;
}