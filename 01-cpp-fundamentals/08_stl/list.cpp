#include<iostream>
#include<list>

int main(){
    std::list<int> l = {2, 4, 6, 8, 10};

    l.push_back(12);
    l.push_back(14);

    //display using for each loop
    for(int x:l) std::cout<<x<<" ";
    std::cout<<std::endl;

    l.pop_back();

    //display using iterator
    std::list<int>::iterator itr;
    for(itr=l.begin(); itr!=l.end(); itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    //modifying values using iterator
    for(itr=l.begin(); itr!=l.end(); itr++){
        std::cout<<++*itr<<" ";
    }
    std::cout<<std::endl;

    return 0;
}