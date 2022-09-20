#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
        User input
        cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
    */
    string nombre;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << endl;
    return 0;
}  
