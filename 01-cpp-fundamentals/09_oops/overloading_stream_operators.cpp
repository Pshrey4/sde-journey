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

        // //display function for printing the complex number
        // void display(){
        //     std::cout<<real<<" + i"<<img<<std::endl;
        // }

        //overload insertion operator
        friend std::ostream & operator<<(std::ostream &out, complex &c);
};

int main(){
    complex c1(5, 3);
 
    //we need to call the display function to have it display complex numbers
    // c1.display();

    //display onscreen using overloaded function
    // std::cout<<c1<<std::endl;
    std::cout<<c1;

    return 0;
}

std::ostream & operator<<(std::ostream &out, complex &c){
    std::cout<<c.real<<" + i"<<c.img<<std::endl;
    return out;
}

//if we do it like this without returning then we cannot chain the variables 
//eg: cout<<c1<<c2<<c3; or cout<<c1<<endl;
//these things are not possible
// void operator<<(std::ostream &out, complex &c){
//     std::cout<<c.real<<" + i"<<c.img<<std::endl;
// }

