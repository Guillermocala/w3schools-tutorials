#include <iostream>
#include "Class.h"

using namespace std;

int main(int argc, char* argv[]) {
    
    Cuenta cuenta1 = Cuenta("Andrea");
    Cuenta cuenta2 = Cuenta("Guillermo", 20000);

    cuenta1.setCantidad(2100000);

    cout << cuenta1.toString() << endl;
    cout << cuenta2.toString() << endl;

    cout << "\nDespues de transacciones..." << endl;

    cuenta1.ingresar(1000000);
    cuenta2.retirar(4000000);

    cout << cuenta1.toString() << endl;
    cout << cuenta2.toString() << endl;

    return 0;
}
