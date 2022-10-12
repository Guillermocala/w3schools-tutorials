#include <iostream>

using namespace std;

int main() {
    /*
        EXCEPTIONS
    When executing C++ code, different errors can occur: coding errors 
    made by the programmer, errors due to wrong input, or other 
    unforeseeable things.

    When an error occurs, C++ will normally stop and generate an error 
    message. The technical term for this is: C++ will throw an 
    exception (throw an error).

    TRY AND CATCH
    Exception handling in C++ consist of three keywords: try, throw and catch:

    - The try statement allows you to define a block of code to be tested for 
    errors while it is being executed.

    - The throw keyword throws an exception when a problem is detected
    which lets us create a custom error.

    - The catch statement allows you to define a block of code to be 
    executed, if an error occurs in the try block.
    try {
        // Block of code to try
        throw exception; // Throw an exception when a problem arise
    }
    catch () {
        // Block of code to handle errors
    }
    */
    try {
        int age = 15;
        cout << "Ingrese su edad: ";
        cin >> age;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw (age);
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }
    /*
        You can also use the throw keyword to output a reference number,
        like a custom error number/code for organizing purposes.
    */
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 505;
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Error number: " << myNum;
    }
    /*
        If you do not know the throw type used in the try block, you
        can use the "three dots" syntax (...) inside the catch block
        which will handle any type of exception.
    */
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 505;
        }
    }
    catch (...) {
        cout << "Access denied - You must be at least 18 years old.\n";
    }

    return 0;
}