#include<iostream>

int main(){
    float base_sal, per_allow, per_deduc, net_salary;

    std::cout<<"Enter your basic salary ";
    std::cin>>base_sal;
    std::cout<<"Enter percentage allowance ";
    std::cin>>per_allow;
    std::cout<<"Enter percentage deductions ";
    std::cin>>per_deduc;

    net_salary = base_sal + base_sal * per_allow / 100 - base_sal * per_deduc / 100;
    std::cout<<"Net salary is "<<net_salary;
    
    return 0;

}