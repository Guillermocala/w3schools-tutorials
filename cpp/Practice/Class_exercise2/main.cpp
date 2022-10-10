#include <iostream>
#include <conio.h>
#include "Class.h"

using namespace std;

int menu();


int main(int argc, char* argv[]) {
    /*
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
    */
    
    Cuenta cuentas[10];
    int index = 0;
    string nombre, temp;
    double cantidad;

    bool activador = true;
    do {
        switch (menu()) {
            case 1:
                /*insertar cuenta*/
                cout << "\tInsertar cuenta" << endl;
                cout << "Ingrese el nombre del titular: ";
                getline(cin >> ws, nombre);
                cout << "Ingrese la cantidad: ";
                cin >> cantidad;
                cuentas[index] = Cuenta(nombre, cantidad);
                index++;
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 2:
                /*buscar cuenta*/
                cout << "\tBuscar cuenta" << endl;
                cout << "Ingrese el nombre del titular: ";
                getline(cin >> ws, nombre);
                for(int i = 0; i < index; i++){
                    if(cuentas[i].getTitular().compare(nombre) == 0){
                        cout << cuentas[i].toString() << endl;
                    }
                }
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 3:
                /*modificar cuenta*/
                cout << "\tModificar cuenta" << endl;
                cout << "Ingrese el nombre del titular: ";
                getline(cin >> ws, nombre);
                for(int i = 0; i < index; i++){
                    if(cuentas[i].getTitular().compare(nombre) == 0){
                        cout << "Ingrese el nuevo nombre del titular: ";
                        getline(cin >> ws, nombre);
                        cuentas[i].setTitular(nombre);
                    }
                }
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 4:
                /*eliminar cuenta*/
                cout << "\tEliminar cuenta" << endl;
                cout << "Ingrese el nombre del titular: ";
                getline(cin >> ws, nombre);
                for(int i = 0; i < index; i++){
                    if(cuentas[i].getTitular().compare(nombre) == 0){
                        cuentas[i].setTitular("DELETED");
                        cuentas[i].setCantidad(-999999);
                    }
                }
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 5:
                /*mostrar cuentas*/
                cout << "\tMostrar cuenta" << endl;
                for(int i = 0; i < index; i++){
                    cout << cuentas[i].toString() << endl;
                }
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 6:
                /*ingresar en cuenta*/
                cout << "\tIngresar en cuenta" << endl;
                cout << "Ingrese el nombre del titular: ";
                getline(cin >> ws, nombre);
                for(int i = 0; i < index; i++){
                    if(cuentas[i].getTitular().compare(nombre) == 0){
                        cout << "Ingrese la cantidad: ";
                        cin >> cantidad;
                        cuentas[i].ingresar(cantidad);
                        cout << "Usted ha ingresado " << cantidad << ", Exitosamente!" << endl;
                    }
                }
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 7:
                /*retirar de cuenta*/
                cout << "\tRetirar de cuenta" << endl;
                cout << "Ingrese el nombre del titular: ";
                getline(cin >> ws, nombre);
                for(int i = 0; i < index; i++){
                    if(cuentas[i].getTitular().compare(nombre) == 0){
                        cout << "Ingrese la cantidad: ";
                        cin >> cantidad;
                        cuentas[i].retirar(cantidad);
                        cout << "Usted ha retirado " << cantidad << ", Exitosamente!" << endl;
                    }
                }
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            case 0:
                /*salir*/
                activador = false;
                cout << "Pulse una tecla para continuar" << endl;
                getch();
                break;
            default:
                /*unexpected function*/
                break;
        }
    } while(activador);

    return 0;
}

int menu(){
    int option;
    system("cls");
    cout << "\t\t\t##############################" << endl;
    cout << "\t\t\t      Cuentas bancarias       " << endl;
    cout << "\t\t\t##############################" << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     1 - Insertar             " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     2 - Buscar               " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     3 - Modificar            " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     4 - Eliminar             " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     5 - Mostrar              " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     6 - Ingresar en cuenta   " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     7 - Retirar  de cuenta   " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     0 - Salir                " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t##############################" << endl;
    
    bool activador = true;
    do {
        cout << "Ingrese una opcion: ";
        cin >> option;
        if(option >= 0 && option <= 7) {
            activador = false;
        }
        else{
            cout << "Se debe ingresar un numero entre 1 y 5" << endl;
        }
    } while(activador);
    return option;
}