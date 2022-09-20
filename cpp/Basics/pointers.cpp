#include <iostream>

using namespace std;

int main() {
    /*
        the & reference operator: store the memory address as constant
        the * dereference operator: store the memory address as variable

        POINTERS
        is a variable that stores the memory address as its value.
        A pointer variable points to a data type (like int or string) 
        of the same type, and is created with the * operator. The address 
        of the variable you're working with is assigned to the pointer.

        Note that the type of the pointer has to match the type of the 
        variable you're working with.

        There are three ways to declare pointer variables, but the 
        first way is preferred:
        string* mystring; // Preferred
        string *mystring;
        string * mystring;

        DEREFERENCE
        Note that the * sign can be confusing here, as it does two 
        different things in our code:
        - When used in declaration (string* ptr), it creates a 
            pointer variable.
        - When not used in declaration, it act as a dereference operator.

        MEMORY ADDRESS AND VALUE
        we used the pointer variable to get the memory address of a 
        variable (used together with the & reference operator).
        string nombre = "Guillermo";
        string* ptr_nombre = &nombre;

        you can also use the pointer to get the value of the variable, 
        by using the * operator (the dereference operator).
        cout << *ptr_nombre << endl;    //outputs "Guillermo"

    */

    string nombre = "Guillermo";
    string* ptr_nombre = &nombre;

    cout << "nombre: " << nombre << endl;
    cout << "dir nombre: " << &nombre << endl;
    // Reference: Output the memory address of the variable with the pointer
    cout << "ptr nombre: " << ptr_nombre << endl;
    // Dereference: Output the value of the variable with the pointer
    cout << "value from ptr nombre: " << *ptr_nombre << endl;

    // Change the value of the pointer
    *ptr_nombre = "Andrea";
    cout << "\ndespues de modificar..." << endl;
    cout << "value from ptr nombre: " << *ptr_nombre << endl;
    cout << "nombre: " << nombre << endl;

    return 0;
}