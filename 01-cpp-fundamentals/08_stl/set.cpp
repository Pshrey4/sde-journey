#include<iostream>
#include<set>

int main(){
    std::set<int> s = {2, 4, 6, 8, 10};

    s.insert(12);
    s.insert(14);

    //display using for each loop
    std::cout<<"Display using for each loop: "<<std::endl;
    for(int x:s) std::cout<<x<<" ";
    std::cout<<std::endl;

    //display using iterator
    std::cout<<"Display using iterator: "<<std::endl;
    std::set<int>::iterator itr;
    for(itr=s.begin(); itr!=s.end(); itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    return 0;
}