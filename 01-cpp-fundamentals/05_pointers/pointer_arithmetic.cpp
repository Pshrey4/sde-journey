#include<iostream>

int main(){
    int A[5] = {2, 4, 6, 8, 10};

    std::cout<<"Array A: "<<std::endl;
    for(int i=0; i<5; i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";

    int *p = A;

    std::cout<<"Originally p points to "<<*p<<std::endl;

    p++;
    std::cout<<"After increment p points to "<<*p<<std::endl;

    p--;
    std::cout<<"After decrement p points to "<<*p<<std::endl;

    p=p+3;
    std::cout<<"After adding 3, p points to "<<*p<<std::endl;

    p=p-1;
    std::cout<<"After subtracting 1, p points to "<<*p<<std::endl;

    int *q = A;
    int diff;
    diff = p - q;
    std::cout<<"Difference between pointer p and q is "<<diff<<std::endl;

    return 0;
}