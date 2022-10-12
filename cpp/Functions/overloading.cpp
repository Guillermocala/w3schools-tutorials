#include <iostream>

using namespace std;

int suma(int a, int b);
int suma_de_tres(int a, int b, int c);
float suma(float a, float b);

int main() {
    /*
        OVERLOADING
    multiple functions can have the same name with different 
    parameters.
    Instead of defining two functions that should do the same 
    Multiple functions can have the same name as long as the 
    number and/or type of parameters are different.   
    thing, it is better to overload one.
    */
    int numero1 = 10, numero2 = 20, numero3 = 80;
    float numero4 = 15.23, numero5 = 42.78;
    cout << "\tenteros:" << endl;
    cout << "num1: " << numero1 << endl;
    cout << "num2: " << numero2 << endl;
    cout << "num3: " << numero3 << endl;
    cout << "\tflotantes:" << endl;
    cout << "num4: " << numero4 << endl;
    cout << "num5: " << numero5 << endl;
    cout << "\tsumas" << endl;
    cout << "suma de 2 enteros: " << suma(numero1, numero2) << endl;
    cout << "suma de 3 enteros: " << suma_de_tres(numero1, numero2, numero3) << endl;
    cout << "suma de 2 flotantes: " << suma(numero4, numero5) << endl;

    return 0;
}

int suma(int a, int b){
    int resultado = a + b;
    return resultado;
}

int suma_de_tres(int a, int b, int c){
    int resultado = a + b + c;
    return resultado;
}

float suma(float a, float b){
    float resultado = a + b;
    return resultado;
}
