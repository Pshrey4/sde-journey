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

    rectangle r1; //Object is created in stack

    r1.length = 10;
    r1.breadth = 5;

    std::cout<<"r1 lenght: "<<r1.length<<", r1 breadth: "<<r1.breadth<<std::endl;
    std::cout<<"Area of r1: "<<r1.area()<<std::endl;
    std::cout<<"Perimeter of r1: "<<r1.perimeter()<<std::endl;

    rectangle r2; //Object is created in stack
    rectangle *p; //Pointer is created in stack
    p = &r2;

    p->length = 15;
    p->breadth = 10;

    std::cout<<"r2 lenght: "<<p->length<<", r2 breadth: "<<p->breadth<<std::endl;
    std::cout<<"Area of r2: "<<p->area()<<std::endl;
    std::cout<<"Perimeter of r2: "<<p->perimeter()<<std::endl;

    rectangle *q; //Pointer is created in stack
    q = new rectangle; //Object is created in heap

    q->length = 25;
    q->breadth = 10;

    std::cout<<"r3 lenght: "<<q->length<<", r3 breadth: "<<q->breadth<<std::endl;
    std::cout<<"Area of r3: "<<q->area()<<std::endl;
    std::cout<<"Perimeter of r3: "<<q->perimeter()<<std::endl;

    rectangle *m = new rectangle; //Object is created in heap and pointer in stack

    m->length = 35;
    m->breadth = 10;

    std::cout<<"r4 lenght: "<<m->length<<", r4 breadth: "<<m->breadth<<std::endl;
    std::cout<<"Area of r4: "<<m->area()<<std::endl;
    std::cout<<"Perimeter of r4: "<<m->perimeter()<<std::endl;    

    return 0;

}




