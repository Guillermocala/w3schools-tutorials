#include <iostream>

using namespace std;

int main() {
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