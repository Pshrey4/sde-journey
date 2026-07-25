# Operator Overloading in C++ Notes    

Operator Overloading is a feature in C++ that allows us to redefine the behavior of existing operators for user-defined data types (classes).  
C++ provides operators such as:  
- `+` (Addition)  
- `-` (Subtraction)  
- `*` (Multiplication)  
- `/` (Division)  
- `++` (Increment)  
- `--` (Decrement)  
- `new`  
- `delete`  
These operators are already defined for built-in data types like `int`, `float`, `double`, etc.  

For example:  

```
int a = 10, b = 20;
int c = a + b;
```  

The `+` operator knows how to add two integers.  

But what if we create our own class?  

```
class Matrix
{
    // ...
};
```

Can we write  

```cpp
Matrix A, B, C;

C = A + B;
```

Yes, by overloading the `+` operator, we can define what it means to add two `Matrix` objects.  

**User-Defined Data Types**  

Operator overloading is only meaningful for user-defined data types, such as:  
- Classes  
- Structures  
It allows objects of these types to behave similarly to built-in types.  

**Example: Complex Numbers**  

A complex number is written as:  

```text
a + bi
```  

where  
- `a` → Real part  
- `b` → Imaginary coefficient  
- `i` → √(-1)  

Example:  

```text
5 + 7i
```

Another complex number:  

```text
2 + 9i
```

Adding them mathematically:  

```text
(5 + 7i) + (2 + 9i)

= (5 + 2) + (7 + 9)i

= 7 + 16i
```  

We want our C++ program to perform this addition using the `+` operator.  

**Complex Class**  

```
class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
};
```

The constructor uses default arguments, so it can act as both:  
- Default constructor  
- Parameterized constructor  

Before operator overloading, imagine we write a normal member function.  

```
Complex add(Complex x);
```

This function adds two complex numbers.  

**Using the `add()` Function**  

Suppose we have:  

```cpp
Complex c1(3, 7);
Complex c2(5, 4);
Complex c3;
```

Instead of writing  

```cpp
c3 = c1 + c2;
```

we call the member function explicitly:  

```cpp
c3 = c1.add(c2);
```

Here,  
- `c1` is the object calling the function.  
- `c2` is passed as an argument.  

**Function Signature**  

The `add()` function has the following signature:

```
Complex add(Complex x);

Return Type:
Complex
```

because the result of adding two complex numbers is another complex number.  

Parameter: The second complex number is passed as an argument.  

```
Complex x
```

**Implementation of `add()`**  

```
Complex add(Complex x)
{
    Complex temp;

    temp.real = real + x.real;
    temp.imag = imag + x.imag;

    return temp;
}
```  

**Which Object Performs the Addition?**  

In

```
c3 = c1.add(c2);
```

`c1` performs the addition.  
It uses:  
- Its own data members (`real`, `imag`)  
- The parameter object's data members (`x.real`, `x.imag`)  

Similarly,

```
c3 = c2.add(c1);
```

would also work.  

Now,  
- `c2` becomes the current object.  
- `c1` becomes the parameter.  

The final result is still the same because addition is commutative.  

**Converting `add()` into an Operator**  

Instead of writing

```
Complex add(Complex x);
```

rename the function as

```
Complex operator+(Complex x);
```

Notice the syntax:

```
operator+
```

There is no space between `operator` and the operator symbol.  

**Operator Function**  

```
Complex operator+(Complex x)
{
    Complex temp;

    temp.real = real + x.real;
    temp.imag = imag + x.imag;

    return temp;
}
```

Only the function name changes.  
The implementation remains exactly the same.  

**Calling the Operator Function**  

Although the function is written as

```
operator+
```

it could technically be called like this:  

```
c1.operator+(c2);
```

However, C++ allows a much more natural syntax:  

```
c3 = c1 + c2;
```

The compiler automatically translates it into

```
c3 = c1.operator+(c2);
```

Thus,

```cpp
+
```

behaves exactly like the built-in addition operator.   

**Summary**  

| Without Operator Overloading | With Operator Overloading |
|-----------------------------|---------------------------|
| `c3 = c1.add(c2);` | `c3 = c1 + c2;` |
| Function name is `add()` | Function name is `operator+()` |
| Explicit function call | Natural operator syntax |
| Same implementation | Same implementation |

**Operator Overloading Using Friend Functions**  

Suppose we have two complex numbers `c1`, `c2`, and we want to compute `c3 = c1 + c2`.    
Earlier, the idea was:  
- `c1` adds `c2`, or  
- `c2` adds `c1`.  
Now, instead of either object performing the addition, we let an independent function perform the operation.    

A friend function receives both objects as parameters, performs the operation, and returns the result.  

**Complex Class**  

```
class Complex
{
private:
    int real;
    int imag;

public:
    friend Complex operator+(Complex c1, Complex c2);
};
```

**Friend Function Declaration**  

```
friend Complex operator+(Complex c1, Complex c2);
```

| Part | Meaning |
|------|---------|
| `friend` | Declares the function as a friend of the class |
| `Complex` | Return type |
| `operator+` | Function name for overloading `+` |
| `Complex c1, Complex c2` | Two complex numbers passed as parameters |

Unlike a member function, both operands are passed as arguments.  

**Defining the Friend Function**   

Friend functions are not members of the class.  
Therefore,  
- They are written outside the class.  
- They do not use the scope resolution operator (`::`).  

```
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}
```  

**How It Works?**  

Suppose  

```
Complex c1(3, 7);
Complex c2(5, 4);
Complex c3;
```

Call:  

```
c3 = c1 + c2;
```

Internally, the compiler translates this to  

```
c3 = operator+(c1, c2);
```

Notice that:   
- Neither `c1` nor `c2` is calling the function.  
- Both objects are simply passed as arguments.  

**Friend Function vs Member Function**  

| Member Function | Friend Function |
|-----------------|-----------------|
| Belongs to the class | Independent function |
| Uses scope resolution (`::`) when defined outside | Does **not** use scope resolution |
| One operand is the current object | Both operands are passed as parameters |
| Called internally as `c1.operator+(c2)` | Called internally as `operator+(c1, c2)` |
| Can access private members directly | Can access private members because it is declared as a friend |

**Member Function**  

```
Complex operator+(Complex x);
```

Called as  

```cpp
c3 = c1 + c2;
```

Internally,  

```cpp
c1.operator+(c2);
```

- `c1` is the current object.  
- `c2` is the parameter.  

**Friend Function**  

```cpp
friend Complex operator+(Complex c1, Complex c2);
```

Called as  

```cpp
c3 = c1 + c2;
```

Internally,  

```cpp
operator+(c1, c2);
```

- Both operands are passed as parameters.  
- No object owns the function.  

**Why Is It Called a Friend Function?**  

Although the function is not a member of the class, it is declared with the `friend` keyword.    
This allows it to directly access the class's private and protected members.    
For example, `temp.real = c1.real + c2.real;` works even though `real` is a private data member.  
Without the `friend` keyword, this would result in a compilation error.  

**Overloading Stream Operators (`<<` and `>>`) in C++**  

C++ provides two stream operators for input and output:
- `<<` → Insertion Operator (Output)  
- `>>` → Extraction Operator (Input)  

These operators are used with the standard input/output streams:

```cpp
cout << x;   // Display data
cin >> x;    // Read data
```

By default, these operators work with built-in data types such as:    
- `int`  
- `float`  
- `double`  
- `char`  
- `string`  
However, they do not know how to display or read user-defined objects.  
To use `cout` and `cin` directly with our own classes, we must overload the stream operators.  

**Example: Complex Number Class**  

Suppose we have a `Complex` class.  

```
class Complex
{
private:
    int real;
    int imag;
};
```

Assume we create an object:  

```
Complex c1(3, 7);
```

For an integer,  

```cpp
int x = 10;

cout << x;
```

Output:

```text
10
```

But if we write  

```
cout << c1;
```

the compiler gives an error because it does not know how to display a `Complex` object.  

Desired Output:  
Suppose  

```
Complex c1(3, 7);
```

We want  

```
cout << c1;
```

to display  

```text
3 + i7
```

To achieve this, we must overload the insertion operator (`<<`).  

**Step 1: Write a Normal Display Function**  

Before overloading the operator, we can write a normal member function.  

```
class Complex
{
private:
    int real;
    int imag;

public:
    void display()
    {
        cout << real << " + i" << imag;
    }
};
```

Usage:  

```
Complex c1(3, 7);

c1.display();
```

Output:  

```text
3 + i7
```

This works, but it requires explicitly calling the `display()` function.  

Instead, we want:  

```cpp
cout << c1;
```

**Step 2: Overload the `<<` Operator**  

The function name becomes  

```cpp
operator<<
```

**Function Signature**  

The overloaded insertion operator has the following signature:  

```cpp
friend ostream& operator<<(ostream& out, Complex& c);
```  

**Return Type:**    

```cpp
ostream&
```

The function returns the output stream by reference.  
This allows multiple insertions to be chained together.  

Example:  

```
cout << c1 << c2 << c3;  
```

**Function Name**  

```
operator<<
```

This indicates that we are overloading the insertion operator.  

**Parameters**  

The function takes two parameters:

```cpp
ostream& out
```

The output stream object (usually `cout`).  

and

```
Complex& c
```

The complex number object to be displayed.  

**Why Is It a Friend Function?**  

The function operates on two different classes:  
- `ostream`  
- `Complex`  
Since it is not a member of either class, it is implemented as a friend function.  

It is declared inside the class:  

```
class Complex
{
private:
    int real;
    int imag;

public:
    friend ostream& operator<<(ostream& out,
                               Complex& c);
};
```

**Implementing the Function**  

Since it is a friend function:  
- It is defined outside the class.  
- It does not use the scope resolution operator (`::`).  

```
ostream& operator<<(ostream& out,
                    Complex& c)
{
    out << c.real
        << " + i"
        << c.imag;

    return out;
}
```

**Why Return `ostream`?**  

The function returns

```
out
```

instead of `void`.  

This allows chained output statements.  

Example:

```cpp
cout << c1 << c2 << c3;
```

Without returning the stream object, chaining would not be possible.  

**About the Extraction Operator (`>>`)**  

The extraction operator is overloaded in a very similar way.  

Typical signature:  

```
friend istream& operator>>(istream& in,
                           Complex& c);
```

It receives:  
- An input stream (`cin`)  
- A `Complex` object  
and returns the input stream by reference to allow chained input operations such as:  

```cpp
cin >> c1 >> c2;
```

The implementation follows the same principles as the insertion operator.  

**Summary**  

| Operator | Purpose | Typical Signature |
|----------|---------|-------------------|
| `<<` | Output (Insertion) | `friend ostream& operator<<(ostream&, Complex&)` |
| `>>` | Input (Extraction) | `friend istream& operator>>(istream&, Complex&)` |

