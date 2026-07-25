#include<iostream>

class complex{
    private:
        int real;
        int img;

    public:
        //constructor for complex class
        complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }

        //display function for printing the complex number
        void display(){
            std::cout<<real<<" + i"<<img<<std::endl;
        }

        //declaration of friend function inside class
        //friend function can access the private members of a class
        friend complex operator+(complex c1, complex c2);  
};

int main(){
    complex c1(5, 3),c2(10, 5), c3;

    //adding two complex numbers using + operator
    c3 = c1 + c2;

    //can also be called like this
    // c3 = operator+(c1, c2);

    //using display function to display the number as private members of class cannot be accessed from main function
    c3.display();

    return 0;
}

complex operator+(complex c1, complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}