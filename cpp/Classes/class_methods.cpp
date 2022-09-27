#include <iostream>

using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World! From the 1st class" << endl;
    }
};

class MyClass2 {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

void MyClass2::myMethod() {
  cout << "Hello World! From the 2nd class" << endl;
}

int main() {
    /*
        CLASS METHODS
    Methods are functions that belongs to the class.

    There are two ways to define functions that belongs to a class:
    - Inside class definition
    - Outside class definition
    You access methods just like you access attributes; by creating an 
    object of the class and using the dot syntax (.).

    To define a function outside the class definition, you have to declare 
    it inside the class and then define it outside of the class.
    This is done by specifiying the name of the class, followed the 
    scope resolution :: operator, followed by the name of the function.
    */
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method

    MyClass2 myObj2;     // Create an object of MyClass
    myObj2.myMethod();  // Call the method
    return 0;
}