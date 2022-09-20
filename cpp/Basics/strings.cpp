#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
        Strings
        - concatenation: The + operator can be used between strings to add 
        them together to make a new string.
        A string in C++ is actually an object, which contain functions that 
        can perform certain operations on strings.
        - the append() function: allows to concatenate two strings
        --note: C++ uses the + operator for both addition and concatenation. 
        Numbers are added. Strings are concatenated. If you try to add a number to a string, an error occurs.
        u need to cast the number into a string to concatenate
        - the length() function: get the length of a string.
        It is completely up to you if you want to use length() or size()
        - access strings: You can access the characters in a string by referring to its index number inside 
        square brackets [].
        - change strings characters: To change the value of a specific character in a string, refer to the 
        index number, and use single quotes.
        - user input strings: It is possible to use the extraction operator >> on cin to display a string 
        entered by a user. However, cin considers a space (whitespace, tabs, etc) as a terminating character, 
        which means that it can only display a single word (even if you type many words).
        - the getline() function: read a line of text. It takes cin as the first parameter, and the string 
        variable as second.
    */
    string nombre = "Guillermo";
    string apellido = "Cala";
    string nombreCompleto = nombre + " " + apellido;
    string nombreCompleto2 = nombre.append(apellido);
    cout << "Concatenacion simple: " << nombreCompleto << endl;
    cout << "Concatenacion con append: " << nombreCompleto2 << endl;
    cout << "tamanio de concatenacion simplre: " << nombreCompleto.length() << endl;
    cout << "access string: " << nombreCompleto[0] << endl;
    nombreCompleto[0] = 'J';
    cout << "changing first char: " << nombreCompleto << endl;
    string nombreCompleto3;
    cout << "Ingresa tu nombre completo: ";
    getline(cin, nombreCompleto3);
    cout << "Ingreso por getline: " << nombreCompleto3 << endl;

    return 0;
}  
