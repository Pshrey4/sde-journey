#include<iostream>

class complex{
    public:
        int real;
        int img;

        //constructor for complex class
        complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }

        //signature of this function is complex as we are returning a complex number
        // complex add(complex c){
        //     complex temp;
        //     temp.real = real + c.real;
        //     temp.img = img + c.img;
        //     return temp;
        // }

        //we change the name of the above function to `operator+`
        //operator overloading of `+`
        complex operator+(complex c){
            complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
};

int main(){
    complex c1(5, 3);
    complex c2(10, 5);
    complex c3;

    //adding two complex numbers
    // c3 = c1.add(c2);

    //adding two complex numbers using + operator
    c3 = c1 + c2;

    std::cout<<"Addition of two complex numbers: "<<c3.real<<"+"<<c3.img<<"i"<<std::endl;

    return 0;
}