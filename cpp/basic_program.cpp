#include <iostream>     //this is a header file library, allows to use some functions

using namespace std;    
/*
    this is a declarative region, used to organize code.
    The using namespace std line can be omitted and replaced with the std keyword, 
    followed by the :: operator for some objects. ex:
    std::cout << "Hello World!";
*/

int main() {    //main function of the program
    //this is a single line comment
    /*
        this is a 
        multi-line comment
        text into comments are ignored by the compiler (will not be executed).
        are used to explain code and to make it more readable.
        it can also be used to preven execution when testing alternative code
    */
    /*
        cout is an object used together with the insertion operator (<<) to output/print text
        Every C++ statement ends with a semicolon ;
        The compiler ignores white spaces. However, multiple lines makes the code more readable.
        all the code are enclosed in the {} symbols
    */
    cout << "hello world!" << endl;
    /*
        we can use new lines 2 ways:
        "\n" : this can be added into a string or after an insertion operator. ex:
            cout << "hello world!\n";
            cout << "hello world!" << "\n";
        endl: this is a manipulator only usable after an insertion operator
        "\t" : creates a horizontal tab
    */
    return 0;   //ends the main function
}