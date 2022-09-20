#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
        Variables
        int: stores integers (whole numbers), without decimals, such as 123 or -123
        double, float: stores floating point numbers, with decimals, such as 19.99 or -19.99
        char: stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        string: stores text, such as "Hello World". String values are surrounded by double quotes
        bool: stores values with two states: true or false

        You can also declare a variable without assigning the value, and assign the value later.
        int myNum;
        myNum = 15;
        Note that if you assign a new value to an existing variable, it will overwrite the previous value:
        int myNum = 15;  // myNum is 15
        myNum = 10;  // Now myNum is 10
        cout << myNum;  // Outputs 10

        To declare more than one variable of the same type, use a comma-separated list:
        int x = 5, y = 6, z = 50;
        cout << x + y + z;

        You can also assign the same value to multiple variables in one line:
        int x, y, z;
        x = y = z = 50;
        cout << x + y + z;  // Outupts 150

        Identifiers
        Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
        Note: It is recommended to use descriptive names in order to create understandable and maintainable code:

        The general rules for naming variables are:

        Names can contain letters, digits and underscores
        Names must begin with a letter or an underscore (_)
        Names are case sensitive (myVar and myvar are different variables)
        Names cannot contain whitespaces or special characters like !, #, %, etc.
        Reserved words (like C++ keywords, such as int) cannot be used as names

        Constants: unchangeable and read-only
        const int myNum = 15;  // myNum will always be 15
        myNum = 10;  // error: assignment of read-only variable 'myNum'
    */
    const int diaActual = 28; 
    int edad = 24, anioNacimiento = 1998;
    float precioYuca = 1400.80;
    double precioArroz = 5000.25;
    char vocal = 'a';
    string nombre = "Guillermo";
    bool isWorking = false;
    cout << "La edad es: " << edad << " Y nació el anio: " << anioNacimiento << endl;
    cout << "El precio del arroz es: " << precioArroz << endl;
    cout << "La vocal seleccionada es: " << vocal << endl;
    cout << "Mi nombre es: " << nombre << endl;
    cout << "Esta trabajando?(1:si, 0:no): " << isWorking << endl;
    return 0;
}  
