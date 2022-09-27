#include <iostream>

using namespace std;


// Creating a class called "MyClass"
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
    /*
        CLASSES/OBJECTS
    
    Everything in C++ is associated with classes and objects, along with 
    its attributes and methods.
    Attributes and methods are basically variables and functions that 
    belongs to the class. These are often referred to as "class members".

    A class is a user-defined data type that we can use in our program, and 
    it works as an object constructor, or a "blueprint" for creating objects.
    
    CREATING A CLASS
    - The class keyword is used to create a class called MyClass.
    - The public keyword is an access specifier, which specifies that 
    members (attributes and methods) of the class are accessible from 
    outside the class.
    - When variables are declared within a class, they are called attributes.
    - At last, end the class definition with a semicolon ;.

    CREATING AN OBJECT
    - To create an object of MyClass, specify the class name, followed by 
    the object name.
    - To access the class attributes (myNum and myString), use the dot 
    syntax (.) on the object.
    - You can create multiple objects of one class.
    */

    MyClass myObj;
    MyClass myObj2;
    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // the 2nd object
    myObj2.myNum = 30; 
    myObj2.myString = "This is the second object";

    // Print attribute values
    cout << "\tObject 1" << endl;
    cout << "myNum: " << myObj.myNum << endl;
    cout << "myString: " << myObj.myString << endl;

    cout << "\tObject 2" << endl;
    cout << "myNum: " << myObj2.myNum << endl;
    cout << "myString: " << myObj2.myString << endl;


    return 0;
}