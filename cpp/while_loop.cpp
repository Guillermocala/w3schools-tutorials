#include <iostream>

using namespace std;

int main() {
    /*
        The while loop loops through a block of code as long as a specified condition is true.
        while (condition) {
            //code
        }
    */
    int numero = 1;
    cout << "Numeros del 1 al 10 con ciclo WHILE" << endl;
    while (numero <= 10) {
        cout << "numero: " << numero << endl;
        numero++;
    }

    /*
        The do/while loop is a variant of the while loop. This loop will execute the code block 
        once, before checking if the condition is true, then it will repeat the loop as long as
        the condition is true.
        do {
            //code
        } while(condition);
    */
    cout << "Numeros del 11 al 20 con ciclo DO WHILE" << endl;
    do {
        cout << "numero: " << numero << endl;
        numero++;
    } while (numero <= 20);
    return 0;
}