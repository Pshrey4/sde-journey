#include<iostream>

//Examples of array declaration and initialization
int main(){
    int i =0;

    //Array A is initialized to 0 by default
    int A[5];
    for(i=0; i<5; i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";

    //All elements of array are initialized
    int B[5] = {1, 2, 3, 4, 5};
    for(i=0; i<5; i++){
        std::cout<<B[i]<<" ";
    }
    std::cout<<"\n";

    //Some are initialized others automatically are 0
    int C[5] = {1, 3};
    for(i=0; i<5; i++){
        std::cout<<C[i]<<" ";
    }
    std::cout<<"\n";

    //ALl elements initializ3ed to 0
    int D[5] = {0};
    for(i=0; i<5; i++){
        std::cout<<D[i]<<" ";
    }
    std::cout<<"\n";

    //Size of array is not given
    int E[] = {2, 4, 6, 8, 10};
    for(i=0; i<5; i++){
        std::cout<<E[i]<<" ";
    }
    std::cout<<"\n";
    
    //using for each loop to display elements of array
    for(int x:E){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";

    //float type array
    float F[] = {2.3f, 6.7f, 3.5f};
    for(float y:F){
        std::cout<<y<<" ";
    }
    std::cout<<"\n";

    //initializing for each variable with auto
    //doesnt need to know type of array
    for(auto z:F){
        std::cout<<z<<" ";
    }
    std::cout<<"\n";

    //char type array
    char G[] = {'a', 66, 'c', 68};
    for(auto p:G){
        std::cout<<p<<" ";
    }
    std::cout<<"\n";

    //for each loop examples 
    int N[] = {1, 3, 5, 7, 9};
    //here the copy of N array is passed so original values will not change
    for(auto q:N){
        std::cout<<q<<" ";
    }
    std::cout<<"\n";
    //here the reference of N array is passed so original values will change
    for(auto &r:N){  
        std::cout<<++r<<" ";
    }
    std::cout<<"\n";
    //updated values of N array
    for(auto q:N){
        std::cout<<q<<" ";
    }
    std::cout<<"\n";

    return 0;
}