#include<iostream>

class rectangle{

    public: //Until u write public all the data/attributes of a class are by default private i.e. you cannot access them.
        int length;
        int breadth;

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){

    rectangle r1, r2;

    r1.length = 10;
    r1.breadth = 5;

    std::cout<<"r1 lenght: "<<r1.length<<", r1 breadth: "<<r1.breadth<<std::endl;
    std::cout<<"Area of r1: "<<r1.area()<<std::endl;
    std::cout<<"Perimeter of r1: "<<r1.perimeter()<<std::endl;

    r2.length = 15;
    r2.breadth = 10;

    std::cout<<"r2 lenght: "<<r2.length<<", r2 breadth: "<<r2.breadth<<std::endl;
    std::cout<<"Area of r2: "<<r2.area()<<std::endl;
    std::cout<<"Perimeter of r2: "<<r2.perimeter()<<std::endl;

    return 0;

}




