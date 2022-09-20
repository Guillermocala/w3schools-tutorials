#include <iostream>

using namespace std;

int main() {
    /*
        REFERENCES 
        A reference variable is a "reference" or "alias" to an existing 
        variable, and it is created with the & operator.
        A reference can be thought of as a CONSTANT POINTER.

        it can also be used to get the memory address of a variable; which
        is the location of where the variable is stored on the computer.
        When a variable is created in C++, a memory address is assigned 
        to the variable. And when we assign a value to the variable, it 
        is stored in this memory address.

        To access it, use the & operator, and the result will represent 
        where the variable is stored.

        ---WHY?
        References and Pointers are important in C++, because they give 
        you the ability to manipulate the data in the computer's memory 
        - which can reduce the code and improve the performance.

        These two features are one of the things that make C++ stand out
        from other programming languages, like Python and Java.
    */

    int numero = 5;
    int& ref_numero = numero;

    cout << "numero: " << numero << endl;
    cout << "ref numero: " << ref_numero << endl;
    cout << "la direccion de memoria es: " << &numero << endl;

    return 0;
}