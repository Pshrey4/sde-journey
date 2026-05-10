# Functions Notes  

A function is a block of code that performs a specific task and can be reused multiple times.  
Functions help in modularizing code, improving readability, and reducing repetition.    

**Syntax**  
```  
return_type function_name(parameters) {
    // function body
}

Example:
int add(int a, int b) {
    return a + b;
}
```  

**Function Declaration (Prototype)**    
Declares the function before its use without defining its body.    
```
return_type function_name(parameters);

Example:
int add(int, int);
```  

**Function Definition**    
Provides the actual implementation of the function.    
```
int add(int a, int b) {
    return a + b;
}
```  

**Function Call**    
Calling or invoking the function to execute it.    
```
function_name(arguments);

Example:
int result = add(2, 3);
```  

**Types of Functions**  

1. Function with no parameters and no return value  
```  
void greet() {
    std::cout << "Hello";
}
```  
2. Function with parameters and no return value  
```  
void printSum(int a, int b) {
    std::cout << a + b;
}
```
3. Function with no parameters and return value  
```  
int getValue() {
    return 10;
}
```
4. Function with parameters and return value  
```  
int multiply(int a, int b) {
    return a * b;
}
```  

**Return Statement**    
Used to return a value from a function and terminate its execution.    
```
return value;
```  

**Key Points:**    
Only one value can be returned from a function    
Void functions do not return any value    

**Pass by Value**    
A copy of the variable is passed to the function. Changes inside the function do not affect the original variable.    
```
void change(int x) {
    x = 100;
}
```  

**Pass by Reference**    
The actual variable is passed using reference. Changes inside the function affect the original variable.    
```
void change(int &x) {
    x = 100;
}
```  

**Return by Value**    
A copy of the value is returned.    
```
int getNumber() {
    int x = 10;
    return x;
}
```  

**Return by Address (Pointer)**    
Returns the address of a variable. Avoid returning address of local variables.    
```
int* getPointer() {
    static int x = 10;
    return &x;
}
```  

**Return by Reference**    
Returns a reference to a variable.    
```
int& getRef(int &x) {
    return x;
}
```  

**Default Arguments**    
Default values can be assigned to function parameters.    
```
int add(int a, int b = 5) {
    return a + b;
}
```  

**Inline Functions**    
The compiler may replace the function call with the function code to reduce overhead.    
```
inline int square(int x) {
    return x * x;
}
```  

**Function Overloading**    
Multiple functions can have the same name but different parameters.  
If parameters are same but return type is different then it is name conflict not function overloading.    
```
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
```  

**Function Templates**    
Allows writing generic functions that work with any data type.    
```
template <typename T>
T add(T a, T b) {
    return a + b;
}
```  

**Recursion**    
A function calling itself to solve a problem in smaller subproblems.    
```
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

**Local Variables**    
Declared inside a function and accessible only within that function.    
```
void func() {
    int x = 10;
}
```  

**Global Variables**    
Declared outside all functions and accessible throughout the program.    
```
int x = 100;

void func() {
    std::cout << x;
}
```  

**Static Variables**    
Retain their value between function calls.    
```
void counter() {
    static int count = 0;
    count++;
    std::cout << count;
}
```  

**Function Pointer**    
A pointer that stores the address of a function.    
```
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int) = add;
    std::cout << funcPtr(2, 3);
}
```  

**Key Points:**    
Functions make code reusable and modular     
Use meaningful names for functions    
Prefer pass by reference for large data    
Do not return address of local variables    
Static variables persist across function calls    
Function pointers are used for callbacks and dynamic function calls    
Always define a base case in recursion to avoid infinite calls    
