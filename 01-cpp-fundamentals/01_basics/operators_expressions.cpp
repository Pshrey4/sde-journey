#include<iostream>
#include<cmath>

int main(){

    //Example 1: Division and Modulus with integers
    int a, b, c, d;
    a = 13, b = 5;
    c = a / b; 
    //here as both a, b are integers then even if 13/5 is 2.6 we will get only 2
    std::cout<<"Result of integer division is "<<c<<std::endl;
    d = a % b;   
    std::cout<<"Mod operator gives "<<d<<std::endl;

    //Example 2: Typecasting to float
    int x, y;
    float z;
    x = 13, y = 5;
    z = (float) x / y; 
    //Here we typecasted x to float so that it gives accurate result
    //there will be no modulus in this case
    std::cout<<"After typecasting result is "<<z<<std::endl;

    //Example 3: Division using float
    float m, n, o;
    m = 13, n = 5;
    o = m / n;
    std::cout<<"Float result is "<<o<<std::endl;

    //Example 4: Division and Modulus with char
    char p, q, r, s;
    p = 13, q = 5;
    r = p / q;
    std::cout<<"Division with char "<<(int)r<<std::endl;
    s = p % q;
    std::cout<<"Modulus with char "<<(int)s<<std::endl;
    //the reason for typecasting r s is that char stores ASCII codes
    //so when r = 2 and s = 3 on screen it will print the symbol that is associated with this ASCII code
    //therefore i have typecasted it to int to get the result

    //Modulus can only be used with int and char and cannot be used with float

    //Example 5: How to write expressions in c++
    //For example we want to write formula of roots of quadratic equation
    //we include a library called cmath, this library contains funtions like sqrt, pow etc
    float root, a_term, b_term, c_term;
    a_term = 1, b_term = -5, c_term = 6;
    root = (- b_term + sqrt(pow(b_term, 2) - 4*a_term*c_term)) / (2 * a_term);
    std::cout<<"Root of equation is "<<root<<std::endl;

    //Example 6: Compound assignment operators
    int sum;
    //sum = sum + a can be written as
    sum += a;
    //it is faster
    std::cout<<"Sum is "<<sum<<std::endl;

    //Example 7: Increment/Decrement Operators
    int i = 7;
    std::cout<<"Value of i before increment "<<i<<std::endl;
    i++;
    std::cout<<"Value of i after increment "<<i<<std::endl;
    i--;
    std::cout<<"Value of i after decrement "<<i<<std::endl;

    //Example 8: Pre and Post increment
    int j, k;
    j = ++i;
    std::cout<<"Value of j when i is pre-incremented "<<j<<std::endl;
    std::cout<<"Value of i now "<<i<<std::endl;
    k = i++;
    std::cout<<"Value of k when i is post-incremented "<<k<<std::endl;
    std::cout<<"Value of i now "<<i<<"\n";

    //Example 9: Pre and Post increment in expression
    k = i++ * j;
    std::cout<<"Value of k post-increment i "<<k<<std::endl;
    i--;
    k = ++i * j;
    std::cout<<"Value of k pre-increment i "<<k<<std::endl;

    //Example 10: Overflow Concept
    char over = 127; //max +ve range char variable can take
    over++;
    std::cout<<"Value after increment "<<(int)over<<std::endl;
    //here output will be -128 as it goes beyond the range of char

    //Example 11: Bitwise operators
    int var1 = 7, var2 = 5, var3;
    var3 = var1 & var2;
    std::cout<<"Bitwise AND gives "<<var3<<std::endl;


    return 0;
}