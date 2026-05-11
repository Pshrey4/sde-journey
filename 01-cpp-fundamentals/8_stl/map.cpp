#include<iostream>
#include<map>

int main(){
    std::map<int, std::string>  m;

    //inserting key value pairs in a map
    m.insert(std::pair<int, std::string>(1, "Prerna"));
    m.insert({2, "Manasi"});
    m.insert({3, "Ajay"});

    //displaying map values using iterator
    std::map<int, std::string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++){
        std::cout<<itr->first<<" : "<<itr->second<<std::endl;
    }

    //using iterator to find key value
    std::map<int, std::string>::iterator iter;
    std::cout<<"Found key value is: "<<std::endl;
    iter = m.find(2);
    std::cout<<iter->first<<" : "<<iter->second<<std::endl;

    return 0;
}