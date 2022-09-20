#include <iostream>

using namespace std;

int main() {
    /*
        Switch statement
        is used to select one of many code blocks to be executed.
        This is how it works:
        -The switch expression is evaluated once
        -The value of the expression is compared with the values of each case
        -If there is a match, the associated block of code is executed
        -The break and default keywords are optional

        break keyword: when C++ reaches a break keyword, it breaks out of the switch block.
        This will stop the execution of more code and case testing inside the block.
        When a match is found, and the job is done, it's time for a break. There is no need for more testing.
        
        default keyword: specifies some code to run if there is no case match.

    */
    string nombre;
    cout << "ingrese un nombre: ";
    getline(cin >> ws, nombre);
    switch (nombre[0]) {
        /*
            si necesitamos compartir codigo, podemos desarrollarlo de la siguiente manera
            case 1:
            case 2:
            case 3:
                cout << "esto es codigo compartido para el caso 1, 2 y 3" << endl;  
        */
        case 'A':
        case 'a':
            cout << "empieza con vocal a" << endl;
            break;
        case 'E':
        case 'e':
            cout << "empieza con vocal e" << endl;
            break;
        case 'I':
        case 'i':
            cout << "empieza con vocal i" << endl;
            break;
        case 'O':
        case 'o':
            cout << "empieza con vocal o" << endl;
            break;
        case 'U':
        case 'u':
            cout << "empieza con vocal u" << endl;
            break;
        default:
            cout << "no empieza con vocales" << endl;
    }
    return 0;
} 
