#include<iostream>
#include<cmath>

int main(){

    float a_term, b_term, c_term, root_1, root_2, discriminant;

    std::cout<<"Enter values of a, b, c of quadratic equation: "<<std::endl;
    std::cin>>a_term>>b_term>>c_term;

    discriminant = pow(b_term, 2) - 4*a_term*c_term;

    if(discriminant == 0){

        std::cout<<"Roots are real and equal"<<std::endl;

        root_1 = - b_term / (2 * a_term);
        root_2 = root_1;

        std::cout<<"Roots of equation are "<<root_1<<" and "<<root_2<<std::endl;
    }
    else{
        if(discriminant >= 0){

            std::cout<<"Roots are real and unequal"<<std::endl;

            root_1 = (- b_term - sqrt(pow(b_term, 2) - 4*a_term*c_term)) / (2*a_term);
            root_2 = (- b_term + sqrt(pow(b_term, 2) - 4*a_term*c_term)) / (2*a_term);
            
            std::cout<<"Roots of equation are "<<root_1<<" and "<<root_2<<std::endl;
        }
        else{
            std::cout<<"Roots are imaginary"<<std::endl;
        }
    }

    return 0;

}