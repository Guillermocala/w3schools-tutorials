#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream MyFile("filexample1.txt");
    if(MyFile){
       cout << "Archivo creado exitosamente!" << endl; 
    }
    else{
        cout << "Un error ha ocurrido en la creacion" << endl;
    }

    string data;
    cout << "Ingrese una oracion: ";
    getline(cin >> ws, data);
    MyFile << "This is the default line!" << endl;
    MyFile << data;
    MyFile.close();

    ifstream MyRead("filexample1.txt");

    cout << "\tLectura del archivo..." << endl;

    string res;
    while(getline(MyRead, res)){
	cout << res << endl;
    }

    MyRead.close();
    
    return 0;
}
