#include <iostream>

using namespace std;

int main() {
    /*
        You can use break and continue either while loops or for loops.
        The break statement can also be used to jump out of a loop.
    */
    cout << "Se interrumpira el numero a la 4ta iteraccion con BREAK" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << "iteraccion: "<< i << "\n";
    }
    /*
        The continue statement breaks one iteration (in the loop), if a specified
        condition occurs, and continues with the next iteration in the loop.
    */
    cout << "Se saltara la 4ta iterracion con CONTINUE" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << "iteraccion: "<< i << "\n";
    }
    return 0;
}