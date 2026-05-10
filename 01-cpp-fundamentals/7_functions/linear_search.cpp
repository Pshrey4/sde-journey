#include<iostream>

int linear_search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {2, 6, 8, 5, 3, 9, 1, 4, 7, 0};

    int key, index;
    
    std::cout<<"Enter the key to be searched(0 to 9): ";
    std::cin>>key;

    index = linear_search(arr,10,key);

    if(index<0){
        std::cout<<"Key is not found in array"<<std::endl;
    }
    else{
        std::cout<<"Key is found at index: "<<index<<std::endl;
    }    

    return 0;
}