#include <iostream>

using namespace std;

// declaracion
// type name_of_the_function (parameters)
void helloWorld();

int main() {
    /*
        FUNCTIONS
        are a block of code which only runs when it is called.
        You can pass data, known as parameters, into a function.

        Functions are used to perform certain actions, and they are 
        important for reusing code: Define the code once, and use 
        it many times.

        A C++ function consist of three parts:

        1- Declaration: the return type, the name of the function, 
        and parameters (if any).
        2- Definition: the body of the function (code to be executed).
        3- Using: the call of the funcion/procedure.
    */
    // llamado
    helloWorld();

    return 0;
}

// definicion: [prototipo] nombreFuncion(parametros)
void helloWorld(){
    // code to be executed
    cout << "Hello world!" << endl;
}
