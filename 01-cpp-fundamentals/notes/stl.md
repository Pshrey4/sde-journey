# Standard Template Library (STL) Notes  

The Standard Template Library (STL) is a library in C++ that provides ready-made classes and functions for commonly used data structures and algorithms.    
STL helps in writing efficient, reusable, and optimized code.  

The Standard Template Library (STL) mainly consists of:  
1. Algorithms    
2. Containers    
3. Iterators  

**Algorithms**  
Algorithms are built-in functions provided by STL to perform operations like sorting, searching, reversing, merging, etc.  
Algorithms work using iterators.  
Syntax:  
algorithm_name(start_iterator, end_iterator);   
Common STL algorithms: sort(), binary_search(), reverse(), find(), count(), max_element(), min_element(), lower_bound(), upper_bound(), accumulate(), copy(), etc.  
Key Points:  
Algorithms work using iterators    
Most algorithms require start and end iterators    
binary_search() works only on sorted data    
sort() is one of the most important STL algorithms   

**Containers**  
Containers are data structures used to store data.    

1. Vector:  
Dynamic array that resizes automatically.    
Common Functions: push_back(), pop_back(), insert(), erase(), size(), empty(), front(), back(), clear()      
Key Points:  
Stores elements in contiguous memory  
Random access possible  
Insertion at end is efficient  

2. List:  
Doubly Linked List implementation.   
Common Functions: push_front(), push_back(), pop_front(), pop_back(), insert(), erase(), remove(), size(), empty(), front(), back()  
Key Points:  
Fast insertion and deletion  
No random access  

3. Forward List:    
Singly Linked List implementation.    
Common Functions: push_front(), pop_front(), insert_after(), erase_after(), front()  
Key Points:  
Only forward traversal possible  

4. Deque:    
Double Ended Queue. Insertion and deletion possible from both ends.  
Common Functions: push_front(), pop_front(), push_back(), pop_back(), insert(), erase(), front(), back(), size(), empty()  
Key Points:  
Random access supported  
Efficient insertion/deletion at both ends  

5. Priority Queue:    
Implements Heap data structure.  
Default: Max Heap  
Common Functions: push(), pop(), top(), empty(), size()  
Min Heap:  
```
priority_queue<int, vector<int>, greater<int>> pq;
```  

6. Stack:   
Follows LIFO (Last In First Out).  
Common Functions: push(), pop(), top(), empty(), size()  

7. Queue:  
Follows FIFO (First In First Out).    
Common Functions: push(), pop(), front(), back(), empty(), size()  

8. Set:  
Stores unique elements in sorted order.    
Common Functions: insert(), erase(), find(), count(), size(), empty()  
Key Points:  
Duplicate elements are not allowed  
Elements are automatically sorted  

9. Multiset:  
Stores duplicate elements in sorted order.   
Common Functions: insert(), erase(), find(), count(), size()  

10. Map:  
Stores key-value pairs in sorted order of keys.    
Common Functions: insert(), erase(), find(), count(), size()  
Key Points:  
Keys are unique  
Stored in sorted order  

11. Multimap:  
Allows duplicate keys.    

**Iterators**  
Iterators are used to traverse containers.  
Syntax:  
container.begin()  
container.end()  
```
Example: 
for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it;
}
```  



