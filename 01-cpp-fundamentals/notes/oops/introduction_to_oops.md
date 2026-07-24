# Introduction to Object Oriented Programming (OOP) Notes  

Object-Oriented Programming (OOP) is a software development methodology or programming style used to design and build applications.  
It focuses on organizing software into objects rather than just functions, making large applications easier to design, develop, maintain, and reuse.    

**The Four Pillars of OOP**  

Object-Oriented Programming is based on four fundamental principles:  
1.Abstraction  
2.Encapsulation  
3.Inheritance  
4.Polymorphism  
These principles help software engineers design applications in a systematic and reusable way.  

**1. Abstraction**  
Abstraction is the process of hiding the internal implementation details and exposing only the necessary functionality.  
The user only needs to know what a function does, not how it works.  

Example:  
```
printf("Hello World");
```  
You know that `printf()` prints text on the screen.  
You don't know how it internally:  
- Accesses the console  
- Communicates with the operating system  
- Displays characters  
This is abstraction.  

**2. Encapsulation**  
Encapsulation is the process of combining data and the functions that operate on that data into a single unit (class).  
Data hiding is achieved by making data members private.  
Data is kept private. Functions are made public.  
Data is made private to avoid mishandling, not primarily for security.  

**3. Inheritance**  
Inheritance allows a new class to acquire the properties and behavior of an existing class.  
Instead of creating everything from scratch, new classes reuse existing functionality.  
Advantages:  
- Code reuse  
- Less duplication  
- Easy maintenance  
- Easy extension of existing code  

**4. Polymorphism**  
Polymorphism means one interface can have multiple implementations or behaviors.  
The same operation behaves differently for different objects.  
Inheritance provides the common interface. Polymorphism allows derived classes to provide different implementations of that interface.  

**Summary Table**  

| Pillar | Definition | Example |
|---------|------------|---------|
| **Abstraction** | Hide implementation details and expose only essential functionality. | Driving a car without knowing the engine mechanism. |
| **Encapsulation** | Bundle data and functions together while hiding data. | Bank account accessed through deposit/withdraw functions. |
| **Inheritance** | Create new classes from existing classes. | BMW, Toyota, and Suzuki inherit from Car. |
| **Polymorphism** | One interface with multiple behaviors. | Different cars respond differently to the same `drive()` function. |

**Class vs Object**  
One of the most fundamental concepts in Object-Oriented Programming (OOP) is understanding the difference between a class and an object.  
- A class is a blueprint or definition.  
- An object is an instance created from that blueprint.  

**What is a Class?**  
A class is a template or blueprint that defines:  
- Data (Properties)  
- Functions (Behaviors)  
A class itself does not represent a real object.  
It simply describes what an object should contain.  

**What is an Object?**  
An object is an actual instance of a class.  
It contains everything defined inside the class.  
Multiple objects can be created from the same class.  
All objects have the same structure because they are created from the same blueprint.  
Every object contains everything defined inside the class.  

**Summary**  

| Class | Object |
|--------|--------|
| Blueprint | Instance |
| Definition | Actual entity |
| Logical concept | Physical/Real entity |
| Created once | Multiple objects can be created |
| Does not occupy memory by itself | Occupies memory |

```
Writing the class is designing the blueprint.
Creating objects is using that blueprint.
```  

**Class Definition**  
```
class Rectangle
{
public:

    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
```  
Note: Every class definition must end with a semicolon (`;`).  

**Creating Objects**  
Objects are created just like variables.  
```
Rectangle r1;
Rectangle r2;
```  
or  
```
Rectangle r1, r2;
```  

**Memory Allocation**  
Objects are local variables.  
When created inside a function, they are stored in the Stack Memory.  
Example:  
```
Rectangle r1;
Rectangle r2;
```
Memory layout:  
```
Stack

r1
├── length
└── breadth

r2
├── length
└── breadth
```  
Each object gets its own copy of the data members.  

**Size of an Object**  
Only data members occupy memory.  
Member functions do not increase the size of an object.  
Example:  
```  
class Rectangle
{
public:
    int length;
    int breadth;
};
```  
Assuming:  
int = 4 bytes  
Then,  
```  
length  -> 4 bytes
breadth -> 4 bytes

Total Size = 8 bytes
```  
Therefore,  
```  
sizeof(Rectangle) = 4 bytes
```  

**Accessing Data Members**  
Data members are accessed using the dot (`.`) operator.  
```
r1.length = 10;
r1.breadth = 5;
```  
Similarly,
```
r2.length = 15;
r2.breadth = 10;
```  

**Accessing Member Functions**  
Member functions are also accessed using the dot (`.`) operator.  
```
cout << r1.area();
  
Output:  
50

because:
10 × 5 = 50
```  
Similarly,  
```
cout << r2.area();

Output:
150

because:
15 × 10 = 150
```  

**The Dot (.) Operator**  
The dot operator is used to access:  
- Data members  
- Member functions  
Example:  
```
r1.length
r1.breadth
r1.area()
r1.perimeter()
```  

**Why `public:` is Required?**  
By default, everything inside a class is private.  
```
class Rectangle
{
    int length;
    int breadth;
};

This is equivalent to:

class Rectangle
{
private:
    int length;
    int breadth;
};
```  
Trying to access:  
```  
r1.length = 10;
```  
will produce an error.  
To allow access, declare members as public.  
```
class Rectangle
{
public:
    int length;
    int breadth;
};
```  

**Objects, Pointers, Stack, and Heap in C++**  
In C++, objects can be created in two ways:  
1.Inside the Stack  
2.Inside the Heap (Dynamic Memory)  

Objects can also be accessed:  
- Directly using the object  
- Indirectly using a pointer  

Example:  
```
Rectangle Class: 

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

Creating an Object in Stack:

int main()
{
    Rectangle r;
}

Memory Representation:
Stack
┌──────────────┐
│      r       │
├──────────────┤
│ length       │
│ breadth      │
└──────────────┘
```  
The object is automatically created inside the stack memory.  

**Creating a Pointer to an Object**  
A pointer can point to an existing object.  
```
Rectangle r;
Rectangle *p;
p = &r;

Memory Layout:
Stack
┌──────────────┐
│      p       │─────────────┐
└──────────────┘             │
                             │
┌──────────────┐             │
│      r       │◄────────────┘
├──────────────┤
│ length       │
│ breadth      │
└──────────────┘

- `r` is an object.
- `p` stores the address of `r`.
```

**Accessing Members Using a Pointer**  
Use the arrow (`->`) operator.  
```
p->length = 10;
p->breadth = 5;

cout << p->area();
```  
The arrow operator accesses data members and member functions through a pointer.   

**Arrow Operator (`->`)**  
The arrow operator is used to access members of an object through a pointer.  
```
p->length = 10;

is equivalent to

(*p).length = 10;
```

Similarly,  
```
p->area();

is equivalent to

(*p).area();
```  
The `->` operator is simply a convenient way to dereference an object pointer and access its members.  

**Creating an Object in Heap**  
Objects can also be created dynamically using `new`.  
```
Rectangle *p;
p = new Rectangle;

or

Rectangle *p = new Rectangle;

Memory Representation:
Stack                        Heap

┌──────────────┐            ┌──────────────┐
│      p       │──────────► │ Rectangle    │
└──────────────┘            ├──────────────┤
                            │ length       │
                            │ breadth      │
                            └──────────────┘

Pointer is stored in Stack.
Object is created in Heap.
```   
Each pointer refers to a separate dynamically allocated object.  

**Using Heap Objects**  
```
Rectangle *p = new Rectangle;

p->length = 15;
p->breadth = 10;

cout << p->area();

Output:
150

because:
15 × 10 = 150
```  
Java does not allow creating objects directly on the stack like C++.  

**Data Hiding in C++**  

Problem Without Data Hiding:  
Consider the following class.  
``` 
class Rectangle
{
public:

    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
};
```  
Since data members are public, anyone can directly modify them.  
```
Rectangle r;

r.length = 10;
r.breadth = -5;

cout << r.area();

Output:
-50
```  
A rectangle cannot have a negative area.  
The class is now producing incorrect results because its data was mishandled.  

```
private:
    int length;
    int breadth;

Now the data members cannot be accessed directly.  

r.length = 10;    // ❌ Error

Direct reading is also prohibited.

cout << r.length; // ❌ Error
```  

If data is private, how do we set values and read values?  
We need special functions.  

**Setter Functions**  
Setter functions modify data members.

```
void setLength(int l)
{
    length = l;
}

void setBreadth(int b)
{
    breadth = b;
}

Rectangle r;
r.setLength(10);
r.setBreadth(5);
```  

**Getter Functions**  
Getter functions return data member values.  
```
int getLength()
{
    return length;
}

int getBreadth()
{
    return breadth;
}

cout << r.getLength();
```  

**Validation Inside Functions**  
Instead of directly assigning values, setter functions can validate the input.  
```
void setLength(int l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}

Similarly,

void setBreadth(int b)
{
    if (b >= 0)
        breadth = b;
    else
        breadth = 0;
}

Now,

r.setBreadth(-5);

actually stores

breadth = 0

instead of

breadth = -5
```  

**Using the Class**  
```
Rectangle r;

r.setLength(10);
r.setBreadth(5);

cout << r.area();

Output:
50
```  

**Property Functions**  
Functions used for accessing data members are called Property Functions.    
There are two types:  
- Accessors  
- Mutators  

**1. Accessor Functions**  
Accessor functions read the value of a data member.  
Example:  
```
getLength()

getBreadth()
```  
Characteristics:  
- Return values  
- Do not modify data  

**2. Mutator Functions**  
Mutator functions modify the value of a data member.  
Example:  
```
setLength()

setBreadth()
```  
Characteristics:  
- Update data  
- Can perform validation  

**Read-Write Property**  
If both getter and setter exist,  
```  
getXXX()

setXXX()
```  
the property is Read-Write.  
Example:  
```  
getLength()

setLength()
```  

**Read-Only Property**  
If only the getter exists,  
```  
getXXX()
```  
the property is Read-Only.  
Example:  
```  
getLength()
```  
Users can read the value but cannot modify it.  

**Write-Only Property**  
If only the setter exists,  
```  
setXXX()
```  
the property becomes Write-Only.  
Users can update the value but cannot read it.  
This is uncommon but useful for storing secret values such as passwords or security keys.  

**Types of Properties**  

| Getter | Setter | Property Type |
|----------|----------|---------------|
| ✅ | ✅ | Read-Write |
| ✅ | ❌ | Read-Only |
| ❌ | ✅ | Write-Only |

**Constructors in C++**  

A constructor is a special member function that is automatically called whenever an object is created.  
Its primary purpose is to initialize an object with valid values at the time of its creation.  

Key Idea: An object should be initialized during construction, not after it has been created.   

**Why Do We Need Constructors?**  

Consider the following class:  

```
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l);
    void setBreadth(int b);
};
```   

Suppose we create an object.  

```
Rectangle r;
```  

Memory  

```  
Rectangle

┌──────────────┐
│ length   ?   │
│ breadth  ?   │
└──────────────┘
```  

Initially,  
- `length` → Garbage value  
- `breadth` → Garbage value  

We then write:  

```
r.setLength(10);
r.setBreadth(5);
```  

Although this works, it is not the ideal design.  

**Philosophy Behind Constructors**  

Think of purchasing a car.  
When you order a car, you specify:  
- Color  
- Model  
- Variant  
The car arrives with those properties already set.  
You do not:  
1. Buy a colorless car.  
2. Take it home.  
3. Paint it yourself.  

Similarly,  
A `Rectangle` should already have valid dimensions when it is created.  
Instead of:  
```
Rectangle r;

r.setLength(10);
r.setBreadth(5);
```  

we should be able to write:  

```
Rectangle r(10, 5);  
```  

The object is initialized correctly during construction.  

**What is a Constructor?**  

A constructor is a special member function that:  
- Has the same name as the class  
- Has no return type  
- Is called automatically when an object is created  

**Syntax:**  

```
class Rectangle
{
public:

    Rectangle()
    {

    }
};
```  

Notice:    
- Constructor name = Class name  
- No return type (`void`, `int`, etc. are not used)  

**Compiler-Provided Constructor**    
Even if we don't write a constructor, the compiler provides one automatically.  
This is called the:  
- Default Constructor  
- Compiler-Generated Constructor  
- Built-in Constructor  
It is responsible for constructing the object.   

**Types of Constructors**  

There are three commonly used constructors.  

```
Constructors
│
├── Default (Compiler Generated)
│
└── User Defined
      │
      ├── Non-Parameterized Constructor
      ├── Parameterized Constructor
      └── Copy Constructor
```  

**1. Non-Parameterized Constructor**  

A constructor without parameters.

```
class Rectangle
{
public:

    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
};
```  

Creating an object

```
Rectangle r;
```

or

```
Rectangle r();
```

initializes  

```
length  = 0
breadth = 0
```  

instead of garbage values.  

Memory Representation

```
Rectangle r

┌──────────────┐
│ length = 0   │
│ breadth = 0  │
└──────────────┘
```  

**2. Parameterized Constructor**  

A constructor that accepts arguments.  

```
class Rectangle
{
public:

    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
};
```  

Creating an object  

```
Rectangle r(10, 5);
```  

Results in  

```
Rectangle r

┌──────────────┐
│ length = 10  │
│ breadth = 5  │
└──────────────┘
```  

**Why Use Setter Functions?**  

Instead of writing  

```
length = l;
breadth = b;
```  

the constructor calls  

```
setLength(l);
setBreadth(b);
```  

because the setters already perform validation.  

This avoids duplicating validation logic.  

**3. Copy Constructor**  

A copy constructor creates a new object as a copy of an existing object.  

Syntax  

```
Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}
```  

Creating an object  

```
Rectangle r1(10, 5);

Rectangle r2(r1);
```  

Memory  

```
r1

┌──────────────┐
│ length = 10  │
│ breadth = 5  │
└──────────────┘


r2

┌──────────────┐
│ length = 10  │
│ breadth = 5  │
└──────────────┘
```  

The new object gets the same values as the original object.  

**Why Pass by Reference?**  

Copy constructor parameter  

```
Rectangle(Rectangle &rect)
```

is passed by reference.  

Passing by value would require creating another copy, which would again invoke the copy constructor, leading to unnecessary object creation.  

**Constructor Overloading**  

Constructors can be overloaded.  

```
Rectangle();

Rectangle(int l, int b);

Rectangle(Rectangle &rect);
```  

All have the same name but different parameter lists.  
All three are valid overloads.    

**Default Arguments in Constructors**  

Parameterized constructors can also use default arguments.  

```
Rectangle(int l = 0, int b = 0)
{
    setLength(l);
    setBreadth(b);
}
```  

Now all of the following are valid.  

```
Rectangle r1();

Rectangle r2(10);

Rectangle r3(10, 5);
```  

Behavior

| Statement | Result |
|-----------|--------|
| `Rectangle r1;` | `length = 0`, `breadth = 0` |
| `Rectangle r2(10);` | `length = 10`, `breadth = 0` |
| `Rectangle r3(10,5);` | `length = 10`, `breadth = 5` |

**Important Note**  
If a parameterized constructor already provides default values, there is no need to separately write a non-parameterized constructor.  
Otherwise, both constructors would match causing ambiguity.    

**Constructor Execution**  

```
Object Creation
        │
        ▼
Constructor Called Automatically
        │
        ▼
Initialize Data Members
        │
        ▼
Ready to Use Object
```    

Remember: A constructor's job is to ensure that an object is created in a valid, usable state from the very beginning, rather than requiring initialization afterward.     

**Deep Copy Constructor**  

When a class contains dynamically allocated memory (using `new`), the default behavior of a copy constructor may lead to problems.  
Instead of creating a new copy of the dynamic memory, it simply copies the pointer address, causing multiple objects to share the same memory.  
To avoid this, we use a Deep Copy Constructor.  

Example Class:  

```
class Test
{
public:
    int a;
    int *p;

    Test(int size)
    {
        a = size;
        p = new int[a];
    }

    Test(Test &t)
    {
        a = t.a;
        p = t.p;        // Shallow Copy
    }
};
```  

Step 1: Create the First Object  

```
Test t(5);
```  

The parameterized constructor is called.  

Execution:  

```
a = 5;

p = new int[5];
```  

Memory Layout

```
Stack                     Heap

t
┌────────────┐
│ a = 5      │
│ p ---------┼──────────────┐
└────────────┘              │
                            ▼
                     +---+---+---+---+---+
                     |   |   |   |   |   |
                     +---+---+---+---+---+
```  

- `a` stores the size.  
- `p` points to a dynamically allocated array of size 5.  

Step 2: Create a Copy

```
Test t2(t);
```

The copy constructor is called.  

Current implementation:  

```
Test(Test &t)
{
    a = t.a;
    p = t.p;
}
```  

Memory Layout (Shallow Copy)

```
Stack                             Heap

t
┌────────────┐
│ a = 5      │
│ p ---------┼──────────────┐
└────────────┘              │
                            │
t2                          │
┌────────────┐              │
│ a = 5      │              │
│ p ---------┼──────────────┘
└────────────┘
                            ▼
                     +---+---+---+---+---+
                     |   |   |   |   |   |
                     +---+---+---+---+---+
```  

Notice that both pointers point to the same array.  

Why is This Wrong?  
The copied object should have its own memory.  
Instead,  
- `t` owns one array.  
- `t2` points to the same array.  
Both objects now share the same dynamic memory.  
This is called Shallow Copy.  

Problems with Shallow Copy:  
Since both objects share the same memory:  
- Changes made through one object affect the other.  
- If one object deletes the memory, the other pointer becomes invalid.  
- Can lead to dangling pointers and double deletion.  

**Deep Copy**  
Instead of copying the pointer, allocate a new array and copy the contents.  

```
Test(Test &t)
{
    a = t.a;

    p = new int[a];
}
```  

Now each object gets its own memory.  

Memory Layout (Deep Copy)  

```
Stack                                  Heap

t
┌────────────┐
│ a = 5      │
│ p ---------┼────────────► +---+---+---+---+---+
└────────────┘             |   |   |   |   |   |
                           +---+---+---+---+---+

t2
┌────────────┐
│ a = 5      │
│ p ---------┼────────────► +---+---+---+---+---+
└────────────┘             |   |   |   |   |   |
                           +---+---+---+---+---+
```  

Now,  
- `t` has its own array.  
- `t2` has its own array.  
The two objects are completely independent.  

Copying the Elements:  
Creating a new array is not enough.  
If the original array already contains values, those values must also be copied.  

Example:
Original object  

```
+----+----+----+----+----+
| 6  | 9  | 5  | 4  | 3  |
+----+----+----+----+----+
```  

The copied object should also contain  

```
+----+----+----+----+----+
| 6  | 9  | 5  | 4  | 3  |
+----+----+----+----+----+
```  

This requires copying each element individually.  

```
for(int i = 0; i < a; i++)
{
    p[i] = t.p[i];
}
```  

**Complete Deep Copy Constructor**  

```
Test(Test &t)
{
    a = t.a;

    p = new int[a];

    for(int i = 0; i < a; i++)
    {
        p[i] = t.p[i];
    }
}
```  

Now the copied object has:  
- Its own data members  
- Its own dynamically allocated memory  
- A copy of all array elements  

**Shallow Copy vs Deep Copy**  

| Shallow Copy | Deep Copy |
|--------------|-----------|
| Copies pointer address | Allocates new memory |
| Objects share the same dynamic memory | Each object owns its own memory |
| Changes affect both objects | Objects are independent |
| Can cause dangling pointers and double deletion | Safe memory management |
| Suitable only when no dynamic memory is involved | Required when dynamic memory is used |

**When is Deep Copy Required?**  
A deep copy constructor is required whenever a class contains dynamically allocated memory.  

Example:  

```
int *p = new int[10];
```  

or any other resource that needs independent ownership.   

**Types of Member Functions in a Class**  

A well-designed class usually contains different types of member functions, each serving a specific purpose. Although not all of them are mandatory, following this structure results in a cleaner, more maintainable, and more professional class design.  

Note: These are guidelines, not strict rules. Include only the functions that are meaningful for your class.  

**Complete Structure of a Class**  

```
class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    // Mutators (Setter Methods)
    void setLength(int l);
    void setBreadth(int b);

    // Accessors (Getter Methods)
    int getLength();
    int getBreadth();

    // Facilitators
    int area();
    int perimeter();

    // Inquiry / Inspector
    bool isSquare();

    // Destructor
    ~Rectangle();
};
```  

**Member Function Types**  

| Function Type | Purpose | Example |
|---------------|---------|---------|
| Constructor | Initialize objects | `Rectangle()` |
| Parameterized Constructor | Initialize with user values | `Rectangle(int, int)` |
| Copy Constructor | Copy an existing object | `Rectangle(Rectangle &)` |
| Mutator | Modify data members | `setLength()` |
| Accessor | Read data members | `getLength()` |
| Facilitator | Perform class-specific operations | `area()`, `perimeter()` |
| Inquiry / Inspector | Check object state | `isSquare()` |
| Destructor | Cleanup when object is destroyed | `~Rectangle()` |

**Class Definition vs Function Definition**  

In professional C++ programming, the class usually contains only the function declarations (prototypes).  
The actual implementations are written outside the class using the scope resolution operator (`::`).  

```
Inside the Class:

class Rectangle {
public:
    Rectangle();
    int area();
    int perimeter();
};

Outside the Class:

Rectangle::Rectangle() {
    // Constructor definition
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}
```  

Note: Function definitions outside the class improve readability, maintainability, and keep class declarations concise.  

Remember: These are recommended guidelines, not mandatory requirements. Include only the functions that are meaningful for your class.  

**Scope Resolution Operator (`::`)**  

The Scope Resolution Operator (`::`) is used to define member functions outside the class while still associating them with that class.  
In C++, there are two ways to write member functions:  
1. Define the function inside the class.  
2. Declare the function inside the class and define it outside using the scope resolution operator (`::`).  

**Method 1: Define Member Functions Inside the Class**  

The function body is written directly inside the class definition.

```
class Rectangle {
private:
    int length;
    int breadth;

public:
    int area() {
        return length * breadth;
    }
};
```

Characteristics:  
- Function declaration and definition are together.  
- Easy to read for very small functions.  
- Automatically becomes an inline function.  

**Method 2: Define Member Functions Outside the Class**  

Only the function declaration (prototype) is written inside the class.

```
class Rectangle {
private:
    int length;
    int breadth;

public:
    int perimeter();
};
```

The function body is written outside the class using the scope resolution operator.  

```
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}
```  

The `::` operator tells the compiler that `perimeter()` belongs to the `Rectangle` class, even though its definition is written outside the class.  

**Syntax of Scope Resolution Operator**  

```
return_type ClassName::FunctionName(parameters)
{
    // Function body
}
```  

**Inline Functions**  

Any function defined inside the class automatically becomes an inline function.  

Example:

```
class Rectangle {
public:
    int area()
    {
        return length * breadth;
    }
};
```

The compiler may replace

```
r.area();
```

with

```cpp
length * breadth;
```

instead of making a separate function call.

Note: The compiler ultimately decides whether to inline a function or not.  

**When Should Functions Be Inline?**  

Inline functions are suitable for:  
- Very small functions  
- Getter methods  
- Setter methods  
- Simple arithmetic calculations  

Examples:  

```
int getLength()
{
    return length;
}

void setLength(int l)
{
    length = l;
}
```

**When Should Functions NOT Be Inline?**  

Avoid writing complex functions inside the class.  
Examples include functions containing:  
- Loops  
- Nested loops  
- Multiple conditional statements  
- Complex algorithms  
- Large amounts of code  
Instead, declare them inside the class and define them outside using `::`.  

Example:  

```
class Rectangle {
public:
    int perimeter();
};
```

```
int Rectangle::perimeter()
{
    // Larger implementation
}
```   

**Ways to Make a Function Inline**  

**Method 1: Define the Function Inside the Class**  

```
class Test {
public:
    void fun1() {
        cout << "Hello";
    }
};
```

Automatically treated as an inline function.  

**Method 2: Use the `inline` Keyword**  

Even if the function is defined outside the class, it can be declared inline.  

```
class Test {
public:
    void fun2();
};

inline void Test::fun2() {
    cout << "Hello";
}
```

The `inline` keyword requests the compiler to treat the function as an inline function.  

Note:The compiler may choose whether or not to inline the function.  

**Comparison**  

| Function Inside Class | Function Outside Class |
|------------------------|------------------------|
| Automatically inline | Normal member function |
| Definition inside class | Definition outside class |
| Suitable for small functions | Suitable for larger functions |
| May eliminate function-call overhead | Generates a separate function call |
| Keeps implementation inside class | Keeps implementation separate from declaration |

**Best Practice:**    
Use inside-class definitions only for small, simple functions such as getters, setters, or simple calculations.  
Use the scope resolution operator (`::`) for:  
- Constructors  
- Destructors  
- Large functions  
- Functions containing loops or complex logic  
This keeps the class declaration clean and improves maintainability.  

**`this` Pointer in C++**  

The `this` pointer is a special pointer available inside every non-static member function of a class.  
It points to the current object that is invoking the member function.  
The primary use of the `this` pointer is to refer to the data members of the current object and resolve name ambiguity between data members and function parameters.  

Example:  

```
class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
};
```

In this example, the constructor parameters are named differently (`l` and `b`), so there is no ambiguity.  

Assignments are straightforward:  

```
length = l;
breadth = b;
```

**The Ambiguity Problem**  

Suppose we use the same names for the constructor parameters as the data members.  

```
class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth) {
        length = length;
        breadth = breadth;
    }
};
```

Now the question becomes:  
- Which `length` is the data member?  
- Which `length` is the constructor parameter?  

The compiler gives priority to the local variables (parameters).    

So this statement becomes:  

```cpp
length = length;
```

which actually means

```text
parameter length = parameter length;
```

The object's data member remains unchanged.  

The same happens for `breadth`.  

**Solving the Ambiguity Using `this`**  

To refer to the data members of the current object, use the `this` pointer.  

```
class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }
};
```

Now the meaning becomes clear:  

```
this->length
```

refers to the object's data member, while  

```
length
```

refers to the constructor parameter.  

Similarly,  

``` 
this->breadth
```

refers to the object's data member, and  

```
breadth
```

refers to the constructor parameter.  

**Understanding `this`**  

The `this` pointer always points to the current object.  

Suppose we create an object:  

```
Rectangle r1(10, 5);
```

When the constructor executes,  

```
this
```

points to `r1`.  

So,  

```
this->length
```

is equivalent to  

```cpp
r1.length
```

and  

```cpp
this->breadth
```

is equivalent to  

```cpp
r1.breadth
```  

**Object Creation Example**  

```
Rectangle r1(10, 5);
```

The values are passed to the constructor.  

```
Rectangle(int length, int breadth)
```

Initially,  

```text
Parameter length  = 10
Parameter breadth = 5

Object members
--------------
length  = garbage value
breadth = garbage value
```

After executing  

```
this->length = length;
```

the object's `length` becomes  

```text
Object members
--------------
length  = 10
breadth = garbage value
```

After executing  

```
this->breadth = breadth;
```

the object becomes

```text
Object members
--------------
length  = 10
breadth = 5
```

**`this` Pointer Internally:**  

Internally, `this` contains the memory address of the current object.    
Conceptually, `this` may contain an address like `0x7ffeebff590`. This address represents the location of the object currently executing the member function.  

**Syntax:**  

Access a member using:

```cpp
this->member;
```

Example:

```cpp
this->length = length;
this->breadth = breadth;
```

**Why Use `this`?**  

The `this` pointer is commonly used to:  
- Resolve ambiguity between data members and parameters.  
- Access members of the current object.  
- Improve code readability when parameter names match member names.  
- Return the current object (advanced use cases such as method chaining).  

**Structure vs Class in C++**  

In C++, structures (`struct`) and classes (`class`) are almost identical. Both can contain:  
- Data members (variables)  
- Member functions (methods)  
The primary difference between them is their default access specifier.  

**Structure Example**  

```
#include <iostream>
using namespace std;

struct Demo {
    int x;
    int y;

    void display() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Demo d;

    d.x = 10;
    d.y = 20;

    d.display();

    return 0;
}

Output:
10 20
```  

In this example:  
- `x` and `y` are data members.  
- `display()` is a member function.  
- The structure object accesses both variables and functions using the dot (`.`) operator.  

**Structures in C vs C++**  

**C Language**  

In C, a structure can contain only data members.  

```
struct Demo {
    int x;
    int y;
};
```

Functions cannot be defined inside a structure.  

**C++**  

In C++, a structure can contain both data members and member functions.  

```
struct Demo {
    int x;
    int y;

    void display() {
        cout << x << " " << y;
    }
};
```

Thus, a C++ structure behaves very similarly to a class.  

**Default Access Specifier**  

**Structure**  

Everything is public by default.  

```
struct Demo {
    int x;
    int y;

    void display() {}
};
```

is equivalent to

```  
struct Demo {
public:
    int x;
    int y;

    void display() {}
};
```

**Class**  

Everything is private by default.  

```
class Demo {
    int x;
    int y;

    void display() {}
};
```

is equivalent to

```
class Demo {
private:
    int x;
    int y;

    void display() {}
};
```  

Therefore, the members cannot be accessed directly from outside the class.  

**Comparison**  

| Feature | `struct` | `class` |
|----------|----------|----------|
| Can contain data members | ✅ | ✅ |
| Can contain member functions | ✅ | ✅ |
| Supports constructors | ✅ | ✅ |
| Supports inheritance | ✅ | ✅ |
| Supports polymorphism | ✅ | ✅ |
| Default access specifier | **Public** | **Private** |

**When to Use Structure?**    

Structures are commonly used when:  
- The object mainly stores data.  
- All members are intended to be publicly accessible.  
- A lightweight data container is sufficient.  

Example:  

```
struct Student {
    int rollNo;
    string name;
    float marks;
};
```   

**When to Use Class?**  

Classes are preferred when:  
- Data should be hidden from outside code.  
- Encapsulation is required.  
- The object contains behavior along with data.  
- Access control is important.  

Example:  

```
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount);
    void withdraw(double amount);
};
```  



