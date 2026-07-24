#include<iostream>

class student{
    private:
        int roll_no;
        int p_marks;
        int m_marks;
        int c_marks;
        std::string name;

    public:
        //Constructor for class student
        student(int rollno = 0, int physics = 0, int maths = 0, int chemistry = 0, const std::string &name = "xxxx");

        //Method to set roll no of student
        void set_rollno(int roll_no);

        //Method to set name of student
        void set_name(const std::string &name);

        //Method to set marks of student
        void set_marks(int physics, int maths, int chemistry);

        //Method to get roll no of the student
        int get_rollno() const { return roll_no; }

        //Method to get name of the student
        std::string get_name() const { return name; }

        //Method to get physics marks of the student
        int get_pmarks() const { return p_marks; }
        
        //Method to get maths marks of the student
        int get_mmarks() const { return m_marks; }
            
        //Method to get chemistry marks of the student
        int get_cmarks() const { return c_marks; }

        //Method to calculate total marks
        int total_marks();
        
        //Method for grading student based on marks
        char grade();
        
        //Method to display the report card 
        void display();
};

int main(){
    int roll_no;
    std::cout<<"Enter Roll No.: ";
    std::cin>>roll_no;
    std::cin.ignore();

    std::string s_name;
    std::cout<<"Enter name of student: ";
    std::getline(std::cin, s_name);

    int physics, chemistry, maths;
    std::cout<<"Enter physics marks: ";
    std::cin>>physics;
    std::cout<<"Enter chemistry marks: ";
    std::cin>>chemistry;
    std::cout<<"Enter maths marks: ";
    std::cin>>maths;

    student s1(roll_no, physics, maths, chemistry, s_name);
    s1.display();
    
    return 0;
}

//Constructor for class student
student::student(int rollno, int physics, int maths, int chemistry, const std::string &name) : 
    roll_no(rollno), name(name)
    {
    set_marks(physics, maths, chemistry);  
    }

//Method to set roll no of the student
void student::set_rollno(int roll_no){
    this->roll_no = roll_no;
}

//Method to set name of the student
void student::set_name(const std::string &name){
    this->name = name;
}

//Method to set marks of the student
void student::set_marks(int physics, int maths, int chemistry){
    if(physics>=0 && physics<=100){
        p_marks = physics;
    }
    else{
        std::cout<<"Invalid marks entered"<<std::endl;
        p_marks = 0;
    }

    if(maths>=0 && maths<=100){
        m_marks = maths;
    }
    else{
        std::cout<<"Invalid marks entered"<<std::endl;
        m_marks = 0;
    }

    if(chemistry>=0 && chemistry<=100){
        c_marks = chemistry;
    }
    else{
        std::cout<<"Invalid marks entered"<<std::endl;
        c_marks = 0;
    }
}

//Method to calculate total marks
int student::total_marks(){
    return p_marks + m_marks + c_marks;
}

//Method for grading student based on marks
char student::grade(){
    int total = total_marks();

    if(total>250){
        return 'A';
    }
    else if(total>200 && total<=250){
        return 'B';
    }
    else if(total>150 && total<=200){
        return 'C';
    }
    else if(total>100 && total<=150){
        return 'D';
    }
    else if(total>50 && total<=100){
        return 'E';
    }
    else{
        return 'F';
    }
}

//Method to display the report card 
void student::display(){
    std::cout<<"Report Card"<<std::endl;
    std::cout<<"Roll No.: "<<get_rollno()<<"  "<<"Name: "<<get_name()<<std::endl;
    std::cout<<"Subject Marks: "<<std::endl;
    std::cout<<"Physics: "<<get_pmarks()<<"/100"<<std::endl;
    std::cout<<"Chemistry: "<<get_cmarks()<<"/100"<<std::endl;
    std::cout<<"Mathematics: "<<get_mmarks()<<"/100"<<std::endl;
    std::cout<<"Total Marks: "<<total_marks()<<"/300"<<std::endl;
    std::cout<<"Grade: "<<grade()<<std::endl;
}