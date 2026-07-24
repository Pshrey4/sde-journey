#include<iostream>
#include<vector>

int main(){
    std::vector<int> v = {2, 4, 6, 8, 10};

    v.push_back(12);
    v.push_back(14);

    //display using for each loop
    for(int x:v) std::cout<<x<<" ";
    std::cout<<std::endl;

    v.pop_back();

    //display using iterator
    std::vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    //modifying values using iterator
    for(itr=v.begin(); itr!=v.end(); itr++){
        std::cout<<++*itr<<" ";
    }
    std::cout<<std::endl;

    return 0;
}