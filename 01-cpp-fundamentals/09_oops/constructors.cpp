#include<iostream>

class rectangle{

    private: //To avoid mishandling of data we make data members/attributes private
        int length;
        int breadth;

    public:
        //Non-parameterized or default constructor
        // rectangle(){
        //     length = 1;
        //     breadth = 1;
        // }

        //Parameterized constructor
        rectangle(int l = 1, int b = 1){ 
            //If we give default values to the parameters then we do not need an extra overloaded non-paramaterized constructor
            set_length(l);
            set_breadth(b);
        }

        //Copy Constructor
        rectangle(rectangle &r){
            length = r.length;
            breadth = r.breadth;
        }

        //This is property function to set the length of rectangle
        void set_length(int l){
            if(l>=0){
                length = l;
            }
            else{
                std::cout<<"Invalid length entered"<<std::endl;
                length = 0;
            }
        }

        //This is property function to set the breadth of rectangle
        void set_breadth(int b){
            if(b>=0){
                breadth = b;
            }
            else{
                std::cout<<"Invalid breadth entered"<<std::endl;
                breadth = 0;
            }
        }

        //This is property function to get the length of rectangle
        int get_length(){
            return length;
        }

        //This is property function to get the breadth of rectangle
        int get_breadth(){
            return breadth;
        }

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){

    rectangle r1;
    std::cout<<"Area of r1: "<<r1.area()<<std::endl;

    rectangle r2(10, 5);
    std::cout<<"Area of r2: "<<r2.area()<<std::endl;   
    
    rectangle r3(r2);
    std::cout<<"Area of r3: "<<r3.area()<<std::endl;

    return 0;
}




