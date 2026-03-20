# Strings Notes  
A string is a sequence of characters used to store text.  

Declaration:  
```
//Using C-Style String
char str[size];

//Using `string`
#include <string>
std::string str;
```  

Initialization  
```
//C-Style
char str[] = "Hello";

//String Class
std::string str = "Hello";
```  

Input:  
```
std::cin >> str;      // reads single word
std::getline(std::cin, str);   // reads full line
```  

Accessing Characters:  
```
str[index];
```  

Key Points:  
Indexing starts from 0  
C-style strings end with '\0' (null character)  
`std::string` is dynamic and safer  
Supports built-in operations (size, append, etc.)  
Avoid out-of-bounds access  

