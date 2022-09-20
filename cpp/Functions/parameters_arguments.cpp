#include <iostream>

using namespace std;

void helloUser(string nombre="nombre", string apellido="apellido");

int main() {
    /*
        PARAMETERS/ARGUMENTS
        Information can be passed to functions as a parameter. 
        Parameters act as variables inside the function.

        Parameters are specified after the function name, 
        inside the parentheses. You can add as many parameters 
        as you want, just separate them with a comma

        DEFAULT PARAMETER VALUE
        You can also use a default parameter value, by using 
        the equals sign (=).
        If we call the function without an argument, it uses the default value.

        A parameter with a default value, is often known as an 
        "optional parameter".

        ---> You can't re-declare default arguments twice in the same 
        scope. In practice, this means that default arguments (usually) 
        appear only at the first declaration of the function.
        
        MULTIPLE PARAMETERS

        you can add as many parameters as you want.
        when you are working with multiple parameters, the function call 
        must have the same number of arguments as there are parameters
        and the arguments must be passed in the same order.
    */

    /*
        los parametros en el llamado son conocidos como parametros reales
    */
    cout << "Llamada normal: " << endl;
    helloUser("Guillermo", "Cala");
    cout << "Llamada sin parametros: " << endl;
    helloUser();



    return 0;
}


void helloUser(string nombre, string apellido){
    /*
        los parametros en la definicion y declaracion son conocidos
        como parametros formales
    */
    cout << "Hello, " << nombre << " " << apellido << endl;
}
