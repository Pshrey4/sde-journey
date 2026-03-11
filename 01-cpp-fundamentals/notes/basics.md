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