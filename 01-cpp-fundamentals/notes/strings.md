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

**C-String Functions (`<cstring>`)**  
Common functions used with C-style strings (`char[]`).  
SYntax:  
```
strlen(str);          // length of string

strcpy(dest, src);    // copy string

strcmp(str1, str2);   // compare strings

strcat(dest, src);    // concatenate strings

strchr(str, ch);      // find character

strstr(str, sub);     // find substring

strtok(str, delim);   // tokenize string

strtol(str, endptr, base);   // string to long

strtof(str, endptr);         // string to float
```  
Key Points:  
Works with C-style strings (`char[]`)  
Requires `#include <cstring>` (and `<cstdlib>` for conversions)  
Functions modify original strings (like `strcpy`, `strcat`, `strtok`)  

**String Class**  
`std::string` is a class in C++ used to handle strings in a safe and dynamic way.  
```
//header
#include <string>

//declaration
std::string str;

//initialization
std::string str = "Hello";

//input
std::cin >> str;
std::getline(std::cin, str);

//accessing characters
str[index];
str.at(index);
```  
Key Points:  
Dynamic size (auto-resizing)  
Safer than C-style strings  
No need for manual memory management  
Indexing starts from 0  
`at()` provides bounds checking  

**Class String Functions**  
```
s.length();     // returns number of characters

s.size();       // same as length()

s.capacity();   // returns allocated memory size

s.max_size();   // maximum possible size

s.resize(n);    // changes string size to n

s.empty();      // checks if string is empty (true/false)

s.clear();      // removes all characters

s.append("text");           // adds text at end

s.insert(pos, "text");     // inserts text at position

s.replace(pos, len, "text"); // replaces part of string

s.erase();                  // removes characters

s.push_back(ch);   // adds character at end

s.pop_back();      // removes last character

s1.swap(s2);   // swaps contents of two strings

s.copy(dest); // copies string to char array 

s.find("text"); // finds first occurrence 

s.rfind("text"); // finds last occurrence 

s.find_first_of("ch"); // finds first matching character 

s.find_last_of("ch"); // finds last matching character 

s.substr(pos, len); // returns substring 

s.compare(str); // compares two strings

s.at(index); // returns character at index (with bounds checking) 

s[index]; // returns character at index (no bounds checking) 

s.front(); // returns first character 

s.back(); // returns last character 

str1 + str2; // concatenates two strings 

str = value; // assigns value to string

```  
Key Points  
`length()` and `size()` are same  
`capacity()` ≥ size  
Most functions modify original string  
`find()` functions return index or `npos`  
`rfind()` searches from right side  
`substr()` does not modify original string  
`compare()` returns 0 if equal  
at() is safer than []  
front() and back() give direct access to ends  
'+' creates a new concatenated string  
'=' replaces entire string content  

**String Iterators**  
```
//iterators
string::iterator it;
s.begin();   // points to first character
s.end();     // points after last character

//reverse iterators
string::reverse_iterator rit;
s.rbegin();  // points to last character
s.rend();    // points before first character
```  
Key Points:  
Iterators act like pointers   
Used for traversing string   
`end()` and `rend()` are not actual elements   
Reverse iterators traverse in opposite direction   

