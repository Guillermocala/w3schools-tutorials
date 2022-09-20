#include <iostream>

using namespace std;

void swap_numbers(int &num1, int &num2);

int main() {
    /*
        PASS BY REFERENCE
    You can also pass a reference to the function. This can be useful 
    when you need to change the value of the arguments.

    This is used by append the derefence operator (&) before the 
    formal parameters of the function.
    */
    int numero1 = 10;
    int numero2 = 20;

    cout << "\tValores antes del swap" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    swap_numbers(numero1, numero2);

    cout << "\tValores despues del swap" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    return 0;
}

void swap_numbers(int &num1, int &num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}