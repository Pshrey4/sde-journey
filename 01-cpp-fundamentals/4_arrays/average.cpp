#include<iostream>

int main (){
    int n, avg, sum;

    std::cout<<"Enter number of elements in an array: ";
    std::cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        std::cin>>arr[i];
        sum += arr[i];
    }

    avg = sum / n;

    std::cout<<"Average of all elements of array: "<<avg<<std::endl;

    return 0;    
}