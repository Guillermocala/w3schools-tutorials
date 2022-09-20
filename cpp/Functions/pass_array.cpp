#include <iostream>

using namespace std;

void myFunction(int myNumbers[5]);
void imprimir_array(int array_numerico[50], int cantidad);

int main() {
    /*
        PASS ARRAY
    when you call the function, you only need to use the name of the 
    array when passing it as an argument myFunction(myNumbers). 
    However, the full declaration of the array is needed in the 
    function parameter (int myNumbers[5]).
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int arreglo_numerico[] = {10, 20, 30, 40, 50, 110, 220, 350, 470, 520};
    myFunction(myNumbers);

    int tamanio_array = sizeof(arreglo_numerico) / sizeof(arreglo_numerico[0]);
    imprimir_array(arreglo_numerico, tamanio_array);

    return 0;
}

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
    }
}

void imprimir_array(int array_numerico[50], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << array_numerico[i] << ", ";
    }
}