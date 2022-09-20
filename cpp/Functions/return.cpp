#include <iostream>

using namespace std;

int suma(int a, int b);
string saludo();
// los void no retornan nada, son llamados PROCEDIMIENTOS
void saludo_usuario(string nombre);

int main() {
    /*
        RETURN VALUES
	The void keyword, used in the previous examples, 
	indicates that the function should not return a value. 
	If you want the function to return a value, you can 
	use a data type (such as int, string, etc.) instead 
	of void, and use the return keyword inside the function.
        
    */
    int resultado_suma = suma(4, 5);
    cout << "La suma de 4 + 5 es: " << resultado_suma << endl;
    cout << saludo() << endl;
    
    string usuario;
    cout << "Ingresa tu nombre: ";
    cin >> usuario;
    saludo_usuario(usuario);

    return 0;
}

int suma(int a, int b){
    int resultado = a + b;
    return resultado;
}

string saludo(){
    return "Hello world!";
}

void saludo_usuario(string nombre){
    cout << "Hola, " << nombre << endl;
}