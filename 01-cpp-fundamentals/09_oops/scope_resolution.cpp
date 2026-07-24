#include<iostream>

class rectangle{

    private: //To avoid mishandling of data we make data members/attributes private
        int length;
        int breadth;

    //In class we only write function declaration and define them separately
    public:
        rectangle();
        
        rectangle(int l, int b);
        
        rectangle(rectangle &r);
        
        void set_length(int l);

        void set_breadth(int b);

        //Function is only one line so its ok if its written here
        int get_length(){ return length; }

        //Function is only one line so its ok if its written here
        int get_breadth(){ return breadth; }

        int area();

        int perimeter();

        bool is_square();

        ~rectangle();   
};

int main(){

    rectangle r1(10, 10);
    std::cout<<"Area of r1: "<<r1.area()<<std::endl;

    if(r1.is_square()){
        std::cout<<"r1 is a square"<<std::endl;
    }
    else{
        std::cout<<"r1 is a rectangle"<<std::endl;
    }

    return 0;
}

// rectangle::rectangle(){
//     length = 1;
//     breadth = 1;
// }

rectangle::rectangle(int l = 1, int b = 1){ 
    //If we give default values to the parameters then we do not need an extra overloaded non-paramaterized constructor
    set_length(l);
    set_breadth(b);
}

rectangle::rectangle(rectangle &r){
    length = r.length;
    breadth = r.breadth;
}

void rectangle::set_length(int l){
    if(l>=0){
        length = l;
    }
    else{
        std::cout<<"Invalid length entered"<<std::endl;
        length = 0;
    }
}

void rectangle::set_breadth(int b){
    if(b>=0){
        breadth = b;
    }
    else{
        std::cout<<"Invalid breadth entered"<<std::endl;
        breadth = 0;
    }
}

int rectangle::area(){
    return length * breadth;
}

int rectangle::perimeter(){
    return 2 * (length + breadth);
}

bool rectangle::is_square(){
    return length == breadth;
}

rectangle::~rectangle(){
    std::cout<<"Rectangle Destroyed"<<std::endl;
}