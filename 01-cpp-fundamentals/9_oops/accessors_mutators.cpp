#include<iostream>

class rectangle{

    private: //To avoid mishandling of data we make data members/attributes private
        int length;
        int breadth;

    public:
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

    rectangle r;

    r.set_length(10);
    r.set_breadth(15);

    std::cout<<"Length: "<<r.get_length()<<", Breadth: "<<r.get_breadth()<<std::endl;
    std::cout<<"Area: "<<r.area()<<std::endl;
    std::cout<<"Perimeter: "<<r.perimeter()<<std::endl;

    return 0;
}




