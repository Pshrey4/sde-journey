#include<iostream>

int main(){
    int arr[] = {2, 4, 6, 8, 10}, sum = 0;

    for(auto i:arr){
        sum += i;
    }

    std::cout<<"Sum of all elements of array: "<<sum<<std::endl;

    return 0;

}