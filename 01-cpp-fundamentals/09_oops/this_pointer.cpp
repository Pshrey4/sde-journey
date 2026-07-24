#include<iostream>

class rectangle{

    private: //To avoid mishandling of data we make data members/attributes private
        int length;
        int breadth;

    public:
        rectangle(int l = 1, int b = 1){ 
            set_length(l);
            set_breadth(b);
        }

        void set_length(int length){
            if(length>=0){
                // this pointer is used to point to length
                this->length = length;
            }
            else{
                std::cout<<"Invalid length entered"<<std::endl;
                this->length = 0;
            }
        }

        void set_breadth(int breadth){
            if(breadth>=0){
                //this pointer is used to point to breadth
                this->breadth = breadth;
            }
            else{
                std::cout<<"Invalid breadth entered"<<std::endl;
                this->breadth = 0;
            }
        }

        int get_length(){
            return length;
        }

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

    rectangle r1(10, 5);
    std::cout<<"Area of r1: "<<r1.area()<<std::endl;   
    
    return 0;
}




