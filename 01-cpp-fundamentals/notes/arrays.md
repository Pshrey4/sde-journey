# Arrays Notes  

An array is a collection of elements of the same data type stored in contiguous memory locations.  

**Declaration**  
Declaring an array means specifying its type, name, and size.  
```
data_type array_name[size];

Example:
int arr[5];
```  

**Initialization**  
Assigning values to the array at the time of declaration.  
```
data_type array_name[size] = {values};

Examples:
int arr[5] = {1, 2, 3, 4, 5};
int arr[] = {10, 20, 30};   // size automatically determined
int arr[5] = {1, 2}; //remaining elements are initialized to 0

```  

**Indexing**   
Array indexing starts from 0  
Last index = size - 1  

**Accessing Elements**  
Access elements using their index.  
```
array_name[index]

Examples:
int arr[3] = {5, 10, 15};
std::cout << arr[0];  // 5
std::cout << arr[1];  // 10

arr[2] = 20;          // modifying value

```  

Key Points:  
Index always starts from 0  
Accessing out-of-bounds index leads to undefined behavior  
Arrays store elements in continuous memory  
