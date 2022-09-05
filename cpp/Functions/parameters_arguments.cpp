#include <iostream>

using namespace std;

void helloUser(int numero=5);

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

        
    */
    /*los parametros en el llamado son conocidos como parametros reales*/
    helloUser(123);
    helloUser();



    return 0;
}


void helloUser(int numero=5){
    /*los parametros en la definicion y declaracion son conocidos
    como parametros formales*/
    cout << "Hello, " << numero << endl;
}
