# Loops Notes  

**While Loop**  
A while loop repeatedly executes a block of code as long as the condition is true.  
The condition is checked before each iteration.  
```  
while (condition) { 
    // code to execute 
}  
```  

**Do_while Loop**  
A do-while loop executes the code block at least once, because the condition is checked after the loop body.  
```  
do { 
    // code to execute 
} while (condition);  
```  

**For Loop**  
A for loop is used when the number of iterations is known beforehand.  
It combines initialization, condition, and update in a single line.  
```  
for (initialization; condition; update) { 
    // code to execute 
}  
```  
Initialization: Runs once before the loop starts  
Condition: Checked before each iteration  
Update: Executes after every iteration  

**Infinite Loop**  
An infinite loop is a loop that never terminates because its condition always remains true.  
This usually happens when the loop control variable is not updated or the condition is always true.  

**For Each Loop**  
Used to iterate over all elements of a collection without using an index.  
```
//basic
for (data_type variable : collection) {
    // code
}

//using reference
for (data_type &variable : collection) {
    // code
}
```  
Key Points:  
No need for index variable    
Improves readability and reduces boilerplate code    
By default, elements are accessed as copies  
Use & to modify original elements  
Use const & to avoid copying and prevent modification  
Cannot directly access index of elements  

**Nested Loops**  
A nested loop is a loop inside another loop.  
The inner loop executes completely for each iteration of the outer loop.  
```
//for loop
for (initialization; condition; update) {   
    for (initialization; condition; update) {
        // code
    }
}

//while loop
while (condition) {
    while (condition) {
        // code
    }
}
```  
Key Points:  
Total iterations = outer loop × inner loop  
Commonly used for patterns, matrices, and grids  
Time complexity increases with nesting (e.g., O(n²), O(n³))  


