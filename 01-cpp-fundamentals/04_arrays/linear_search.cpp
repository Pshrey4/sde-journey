#include<iostream>

int main(){
    int size, key;

    std::cout<<"Enter size of array: ";
    std::cin>>size;

    int arr[size];    

    //using for loop to fill the array
    std::cout<<"Enter elements of array: "<<std::endl;
    for(int i=0; i<size; i++){
        std::cin>>arr[i];
    }

    //displaying array elements on screen
    std::cout<<"Array: "<<std::endl;
    for(int i=0; i<size; i++){ 
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";

    std::cout<<"Enter key: ";
    std::cin>>key;

    for(int i=0; i<size; i++){
        if(key == arr[i]){
            std::cout<<key<<" at array location "<<i<<std::endl;
            return 0;
        }
    }

    std::cout<<key<<" not found in array"<<std::endl;    
    
    return 0;
}