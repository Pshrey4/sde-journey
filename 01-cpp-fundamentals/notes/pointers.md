# Pointer Notes  

A pointer is a variable that stores the memory address of another variable.  
```
data_type *pointer_name;
```  

Initialization  
Assigning the address of a variable using `&` (address-of operator).  
```
pointer_name = &variable;
```  

Declaration + Initialization:  
```
data_type *pointer_name = &variable;
```  

Dereferencing  
Accessing the value stored at the address using `*`.  
```
*pointer_name
```    

Key Operators:  
`&` → Address-of operator (gives memory address)  
`*` → Dereference operator (gives value at address)  

Null Pointer  
A pointer that does not point to any valid memory location.  
```
data_type *pointer_name = nullptr;
```   

Key Points:  
Pointer stores address, not actual value  
`*` is used for both declaration and dereferencing  
Type of pointer must match the type of variable  
Uninitialized pointers can cause undefined behavior  
`nullptr` is used to initialize pointers safely  

**Why Pointer?**    
Enables direct access to memory  
Used for dynamic memory allocation (`new`, `delete`)  
Allows efficient passing of variables to functions (pass by reference)  
Helps in working with arrays and strings  
Required for data structures (linked list, tree, graph)  
Enables function pointers and callbacks  
Improves performance by avoiding unnecessary copying  

**Dynamic Allocation**  
Dynamic memory allocation allows memory to be allocated at runtime using pointers.  
Operators:  
`new` → Allocates memory  
`delete` → Deallocates memory  

Allocation:  
```
//single variable
pointer = new data_type;

//array
pointer = new data_type[size];
```  

Deallocation:   
```
//single variable
delete pointer;

//array
delete[] pointer;
```  

Key Points:  
Memory is allocated in heap memory  
Requires pointer to access allocated memory  
Must use `delete` to avoid memory leaks  
Size can be decided at runtime  
`new` returns the address of allocated memory  

**Pointer Arithmetic**  
Pointer arithmetic is used to perform operations on pointers to navigate through memory.  
Operations:  
Increment → `ptr++`  
Decrement → `ptr--`  
Addition → `ptr + n`  
Subtraction → `ptr - n`  
Difference → `ptr1 - ptr2`  
```
//increment
ptr++;

//decrement
ptr--;

//addition
ptr + n;

//subtraction
ptr - n;

//difference(only allowed when both pointers point to same array)
ptr1 - ptr2;
```  
Key Points:  
Pointer arithmetic moves in steps of data type size  
`ptr + 1` moves to the next element, not next byte  
Valid only within the same array  
Subtracting two pointers gives the number of elements between them  
Cannot perform arithmetic on void pointers (without casting)  
Out-of-bounds pointer access leads to undefined behavior  

**Problems Using Pointers**   
Common issues and pitfalls when working with pointers.   
1. Uninitialized Pointer:  
Uninitialized pointer  
Contains garbage address 

2. Dangling Pointer  
Pointer pointing to freed or invalid memory  
Occurs after `delete` or when a variable goes out of scope  

3. Null Pointer Dereferencing  
Accessing a pointer with value `nullptr`  
Leads to runtime error / crash  

4. Memory Leak  
Allocated memory is not deallocated  
Happens when `delete` is not used  

5. Double Deletion  
Deleting the same pointer more than once  
Causes undefined behavior  

6. Out-of-Bounds Access  
Accessing memory beyond allocated range  
Leads to undefined behavior  

Key Points:  
Always initialize pointers (`nullptr`)  
Use `delete` after `new`  
Avoid accessing invalid memory  
Set pointer to `nullptr` after deletion  

**Reference**  
A reference is an alias (another name) for an existing variable.  
```
data_type &reference_name = variable;
```  
Key Points:  
Must be initialized at declaration  
Cannot be null  
Cannot be reassigned to refer to another variable  
Acts as an alias (changes affect original variable)  
No separate memory allocation  
Used for pass by reference  
