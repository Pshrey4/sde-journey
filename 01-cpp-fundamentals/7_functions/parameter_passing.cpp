#include<iostream>

//Pass by value swap function
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//Pass by address swap function
void add_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Pass by reference swap function
void ref_swap(int&a, int&b){
    int temp = a;
    a = b;
     b = temp;
}

//Return by address function
int * add_fun(int a){
    int * p = new int [a];
    for(int i=0;i<a;i++){
        p[i] = i+1;
    }
    return p;
}

//Return by reference function
int & ref_fun(int&a){
    return a;
}

int main(){
    int x = 10, y = 20;

    std::cout<<"Values before swapping: x="<<x<<", y="<<y<<std::endl;

    swap(x,y);

    std::cout<<"Values after swap pass by value: x="<<x<<", y="<<y<<std::endl;

    add_swap(&x,&y);

    std::cout<<"Values after swap pass by address: x="<<x<<", y="<<y<<std::endl;

    ref_swap(x,y);

    std::cout<<"Values after swap pass by reference: x="<<x<<", y="<<y<<std::endl;

    //return by address section starts here
    int size;
    std::cout<<"Enter size of array: ";
    std::cin>>size;

    int *q = add_fun(size);

    //display all elements of array
    for(int i=0; i<size; i++){
        std::cout<<q[i]<<" ";
    }

    std::cout<<std::endl;

    //return by reference section starts here
    int z = 10;

    std::cout<<"Original value of z: "<<z<<std::endl;

    ref_fun(z) = 25;

    std::cout<<"Value of z after ref_fun(): "<<z<<std::endl;

    return 0;
}