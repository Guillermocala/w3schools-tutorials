#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
        Conditions
        You can use these conditions to perform different actions for different decisions
        C++ has the following conditional statements:
        Use if to specify a block of code to be executed, if a specified condition is true
        Use else to specify a block of code to be executed, if the same condition is false
        Use else if to specify a new condition to test, if the first condition is false
        Use switch to specify many alternative blocks of code to be executed

        Ternary Operator
        There is also a short-hand if else, which is known as the ternary operator because 
        it consists of three operands. It can be used to replace multiple lines of code with
        a single line. It is often used to replace simple if else statements.

        variable = (condition) ? expressionTrue : expressionFalse;
    */
    int numero;
    cout << "ingresa un numero: ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "el numero es mayor a cero" << endl;
    }
    else if (numero > 20 && numero < 30)
    {
        cout << "el numero esta entre 20 y 30" << endl;
    }
    else
    {
        cout << "el numero es cero o menor" << endl;
    }
    string nombre;
    cout << "ingresa tu nombre: ";
    /*
        el uso del istream cin >> ws es debido al bufer causado por el cin anterior
        ws extrae los espacios en blanco, así como se puede usar otros parametros
        listados en basic_istream::operator>>
        ws is an input stream object from where whitespaces are extracted.
        Because this function is a manipulator, it is designed to be used alone with 
        no arguments in conjunction with the extraction (>>) operations on input streams (see example below).
        -para hacerlo de otra manera podemos usar un cin.ignore(); antes del getline. ex:
        cin.ignore();
        getline(cin, nombre);
    */
    getline(cin >> ws, nombre);
    cout << "nombre: " << nombre << endl;
    string res = (nombre.length() > 8) ? "tu nombres es largo" : "tu nombre es corto";
    /*
        Otra forma valida para simplificar esa sentencia es la siguiente:
        cout << ((nombre.length() > 8) ? "tu nombres es largo" : "tu nombre es corto") << endl;
    */
    cout << res << endl;
    return 0;
}
