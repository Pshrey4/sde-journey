#include<iostream>

class rational{
    private:
        int num;
        int denom;

    public:
        //constructor for rational class
        rational(int num = 1, int denom = 1){
            this->num = num;
            this->denom = denom;
        }

        //function to add two rational numbers
        friend rational operator+(rational r1, rational r2);

        //function to display rational numbers
        friend std::ostream & operator<<(std::ostream &out, rational &r);
};

int main(){
    rational r1(3, 4), r2(5, 4), r3;

    //adding two rational numbers
    r3 = r1 + r2;

    //displaying the result
    std::cout<<"Sum: "<<r3;

    return 0;
}

rational operator+(rational r1, rational r2){
    rational temp;
    temp.num = r1.num + r2.num;
    temp.denom = r1.denom + r2.denom;
    return temp;
}

std::ostream & operator<<(std::ostream &out, rational &r){
    std::cout<<r.num<<"/"<<r.denom<<std::endl;
    return out;
}