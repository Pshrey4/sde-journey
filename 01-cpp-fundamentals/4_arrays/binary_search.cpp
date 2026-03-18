#include<iostream>

int main(){
    //array has to be sorted for binary search
    //sorting algorithms we will see in dsa 
    //currently i am taking already sorted array
    int arr[10] = {6, 17, 18, 23, 35, 37, 46, 89, 99, 103};
    int low=0, high=9, mid, key;

    std::cout<<"Enter key: ";
    std::cin>>key;

    while(low<=high){
        mid = (low+high)/2;

        if(key == arr[mid]){
            std::cout<<key<<" found at location "<<mid<<std::endl;
            return 0;
        }
        else if(key<arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    std::cout<<key<<" not found in array"<<std::endl;

    return 0;
}