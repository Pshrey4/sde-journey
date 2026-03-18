#include<iostream>

int main(){
    int arr[] = {2, 4, 3, 6, 8, 7, 5, 9}, max = arr[0];

    for(auto i: arr){
        if(i>max){
            max = i;
        }
    }

    std::cout<<"Maximum element of array: "<<max<<std::endl;

    return 0;
}