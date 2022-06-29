#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
        Data types
        - int: store a whole number without decimals, like 35 or 1000
        - float, double: The precision of a floating point value indicates how many digits 
        the value can have after the decimal point. The precision of float is only six or 
        seven decimal digits, while double variables have a precision of about 15 digits. 
        Therefore it is safer to use double for most calculations.
        A floating point number can also be a scientific number with an "e" to indicate the power of 10:
        - boolean: can only take the values true or false
        When the value is returned, true = 1 and false = 0.
        - char: is used to store a single character. The character must be surrounded by single quotes, 
        like 'A' or 'c'. Alternatively, you can use ASCII values to display certain characters:
        - string: is used to store a sequence of characters (text). This is not a built-in type, but 
        it behaves like one in its most basic usage. String values must be surrounded by double quotes.
        To use strings, you must include an additional header file in the source code, the <string> library:
    */
    int num1 = 1000;
    float num2 = 5.75;
    double num3 = 19.99;
    float num4 = 35e3;
    double num5 = 12E4;

    cout << "The numbers examples are... "  << num1  << num2 << endl;
    cout << "int: " << num1 << endl;
    cout << "float: " << num2 << endl;
    cout << "double: " << num3 << endl;
    cout << "float scientific: " << num4 << endl;
    cout << "double scientific: " << num5 << endl;

    cout << "Booleans..." << endl;

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << "true bool" << isCodingFun << endl;
    cout << "false bool" << isFishTasty << endl;

    cout << "Characters..." << endl;
    char myGrade = 'B';
    char a = 62, b = 63, c = 64;
    cout << "simple char: " << myGrade << endl;
    cout << "ascii 62: " << a << endl;
    cout << "ascii 63: " << b << endl;
    cout << "ascii 64: " << c << endl;
    
    cout << "Strings..." << endl;
    string nombre = "Guillermo";
    cout << "Hola, "  << nombre << endl;
    return 0;
}  
