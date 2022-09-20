# Pointers vs References in C++

## Pointers

A pointer is a variable that holds the memory address of another variable. A pointer needs to be dereferenced with the `*` operator to access the memory location it points to. 

## References 

A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. 
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e., the compiler will apply the * operator for you. 

## Differences

1. Initialization:
    - Pointer:
        ```
        int a = 10;
        int *p = &a;
        // OR 
        int *p;
        p = &a;
        ```
        We can declare and initialize pointer at same step or in multiple line.
    - References:
        ```
        int a = 10;
        int &p = a; // It is correct
        // but
        int &p;
        p = a; // It is incorrect as we should declare and initialize references at single step
        ```
        
2. Reassignment:
    - Pointer: A pointer can be re-assigned. This property is useful for the implementation of data structures like a linked list, a tree, etc.
        ```
        int a = 5;
        int b = 6;
        int *p;
        p = &a;
        p = &b;
        ```
    - References: a reference cannot be re-assigned, and must be assigned at initialization.
        ```
        int a = 5;
        int b = 6;
        int &p = a;
        int &p = b; // This will throw an error of "multiple declaration is not allowed"
        
        // However it is valid statement,
        int &q = p;
        ```
    
3. Memory Address: A pointer has its own memory address and size on the stack, whereas a reference shares the same memory address with the original variable but also takes up some space on the stack.
    ```
    int &p = a;
    cout << &p << endl << &a;
    ```

4. NULL value: A pointer can be assigned NULL directly, whereas a reference cannot be.

5. Indirection: You can have a pointer to pointer (known as a double pointer) offering extra levels of indirection, whereas references only offer one level of indirection.
    ```
    In Pointers,
    int a = 10;
    int *p;
    int **q; // It is valid.
    p = &a;
    q = &p;
    
    // Whereas in references,
    int &p = a;
    int &&q = p; // It is reference to reference, so it is an error
    ```

6. Arithmetic operations: Various arithmetic operations can be performed on pointers, whereas there is no such thing called Reference Arithmetic (however, you can perform pointer arithmetic on the address of an object pointed to by a reference, as in &obj + 5).

## When to use What

The performances are exactly the same as references are implemented internally as pointers. But still, you can keep some points in your mind to decide when to use what:

- Use references:
    - In function parameters and return types.
- Use pointers: 
    - If pointer arithmetic or passing a NULL pointer is needed. For example, for arrays (Note that accessing an array is implemented using pointer arithmetic).
    - To implement data structures like a linked list, a tree, etc. and their algorithms. This is so because, in order to point to different cells, we have to use the concept of pointers.

Use references when you can, and pointers when you have to. References are usually preferred over pointers whenever you don’t need “reseating”. This usually means that references are most useful in a class’s public interface. References typically appear on the skin of an object, and pointers on the inside. 


### References

geeks for geeks
[Pointers vs References](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)