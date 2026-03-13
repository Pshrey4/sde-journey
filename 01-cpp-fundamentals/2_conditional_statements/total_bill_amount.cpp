#include<iostream>
int main(){
    int bill_amount, discount, total_bill;

    std::cout<<"Enter your bill amount: "<<std::endl;
    std::cin>>bill_amount;

    if(bill_amount >= 500){
        discount = bill_amount * 20 / 100;
    }
    else if(bill_amount >= 100 && bill_amount < 500){
        discount = bill_amount * 10 / 100;
    }
    else{
        discount = 0;
    }

    total_bill = bill_amount - discount;

    std::cout<<"Your bill amount: "<<bill_amount<<std::endl;
    std::cout<<"Discount applied: "<<discount<<std::endl;
    std::cout<<"Final bill amount: "<<total_bill<<std::endl;

    return 0;
}