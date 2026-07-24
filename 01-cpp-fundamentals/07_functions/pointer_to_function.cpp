#include<iostream>

int max(int x, int y){
    return x>y? x:y;
}

int min(int x, int y){
    return x<y? x:y;
}

int main(){
    int(*fp)(int, int);

    fp = max;

    std::cout<<"Maximum of the two is "<<(*fp)(10,5)<<std::endl;

    fp = min;

    std::cout<<"Minimum of the two is "<<(*fp)(10,5)<<std::endl;

    return 0;
}