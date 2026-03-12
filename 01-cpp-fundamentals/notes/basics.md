# C++ Basics Notes

**1. iostream**  
Library of builtin functions in c++

**2. main() function**  
Execution of program starts from here

**3. cout, cin**  
Builtin objects used for output and input respectively

**4. using namespace std;**  
Namespace under which builtin objects reside.  
If you dont want to use 'using namespace std' then before using any builtin object you can write 'std::'.  
Eg. std::cout<<"Hello world!";  
Tip: Better to use 'std::' as we do not need all objects from namspace std

**5. getline(cin, variable)**  
Reads the entire line of input, including spaces, until the user presses Enter.
Unlike `cin`, which stops reading at the first space.

**6. Data Types**  
i. Primitive: a. Integral{int(2B or 4B), char(1B)}, b. Boolean, c. Floating point{float(4B), double(8B)}  
ii. Userdefined: a. enum, b. structure, c. union, d. class  
iii. Derived: a. array, b. pointer, c. reference  
iv. Modifiers: a. unsigned(can only be used with int & char), b. long(can be used with int & double)  

**7. ASCII Codes**  
A to Z: 65 to 90  
a to z: 97 to 122  
0 to 9: 48 to 57  
For other special symbols you can search for ASCII Codes on google  

**8. Variables**  
Variables are where we store the data, they are the names/identifiers given to the data.  
Variables need to be declared before using in the program.  

**9. Operators in C++**  
i. Arithmetic Operators: +, -, *, /, %  
ii. Relational Operatos: <=, <, >=, >, ==, !=  
iii. Logical Operators: &&, ||, !  
iv. Bitwise Operators: &, |, ~, !  
v. Increment/Decrement Operators: ++, --  
vi. Assignment Operator: =, +=, -=, *=, /=, %=  
vii. Conditional Operator: ?:  
viii. sizeof Operator: sizeof  
ix. Comma Operator: ,  
x. Scope Resolution Operator: ::  
xi. Member access Operator: . ->  
xii. Pointer Operator: * &  

**10. enumeration (enum)**  
enum is a user-defined data type that assigns names to integer constants to make code more readable.  
By default, the first value is `0` and each next element increases by `+1`.  
If one value is changed, the following elements automatically continue from it.  
Example:  
enum Day { MON, TUE, WED = 5, THU, FRI };  

**11. typedef**  
typedef is used to create an alternative name (alias) for an existing data type.  
It makes complex data types easier to read and use.  
Example:  
typedef unsigned int uint;  
uint num = 10;  









