# Conditional Statement Notes  

**1. if...else**
```  
if(condition){  
    //condition is true then run this block of code  
}  
else {  
    //condition is false ruun this block of code  
}  
```

**Note: False - 0, True - 1 (anything else other than 0)**  

**Nested if**  
```
if(condition){  
    if(condition){  
        //code    
    }  
    else{  
        //code    
    }  
}  
else{  
    if(condition){  
        //code    
    }  
    else{  
        //code    
    }  
}  
```

**else if ladder**
```
if(condition){
    //code
}
else if(condition){
    //code
}
else if(condition){
    //code
}
else{
    //code
}
```  
In else-if ladder, to go to a particular condition block it has to first check all the if blocks before it.  
Thereofre, time consuming.  


**Short Circuit**  
Short circuit evaluation means the second condition in a logical expression is not evaluated if the result is already determined by the first condition.  
It occurs with logical operators:  
`&&` (AND)  
If the first condition is false, the second condition is not checked.      
`||` (OR)   
If the first condition is true, the second condition is not checked.  
```
#include <iostream>
int main() {
    int a = 0;
    int b = 5;
    if(a != 0 && b/a > 2) {
        std::cout << "Condition true";
    }
    return 0;
}
```  

**Scope of Variable**  
A variable declared inside a block `{}` exists only within that block.  
After the block ends, the variable is destroyed and its memory is freed.    
Example:  
```
if(a > b){
    int m = a;
}
```  
`m` exists only inside the `if` block.  

**Switch Case Statement**  
The switch statement is a multi-way decision control structure used to execute one block of code among many based on the value of an expression.  
It is commonly used as an alternative to multiple if-else statements when comparing the same variable with different constant values.  
```
switch(expression)
{
    case constant1:
        // code
        break;

    case constant2:
        // code
        break;

    case constant3:
        // code
        break;

    default:
        // code if none of the cases match
}
```  
How It Works  
1. The `expression` inside the `switch` is evaluated once.  
2. Its value is compared with each `case` constant.  
3. If a matching case is found, the corresponding block of code executes.  
4. The `break` statement stops execution and exits the switch.  
5. If no case matches, the `default` block executes.  

Important Points:  
The expression in switch must evaluate to an integral or character type, floating point values like float, double are not allowed.  
Case labels must be constant expressions, duplicate values are not allowed.  
Example:
Break is used to exit the switch statement. If break is omitted, execution continues to the next case. This behavior is called fall-through.  
The default case executes when none of the cases match the expression, it is optional and can appear anywhere inside the switch block(usually written at end).  
Multiple Cases for Same Block.  
Only equality comparison is possible.  
Cannot use relational operators like `<`, `>`, `<=`, `>=`.  
Cannot use ranges directly.  

