#include <iostream>

using namespace std;

//simple structure
struct {
    int nit;
    string nombre;
} myPerson;

//named structure
struct myFruit{
    string nombre;
    float precio;
};

//named structure with a procedure implementation
struct myCar{
    string nombre;
    float precio;
    string color;

    void mostrar(){
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Color: " << color << endl;
    }
};


int main() {
    /*
        STRUCTURES
        Structures (also called structs) are a way to group several 
        related variables into one place. Each variable in the 
        structure is known as a member of the structure.
        Unlike an array, a structure can contain many different data
        types (int, string, bool, etc.).

        CREATE
        struct {             // Structure declaration
            int myNum;         // Member (int variable)
            string myString;   // Member (string variable)
        } myStructure;       // Structure variable

        ACCESS
        use the dot syntax (.).
        myStructure.myNum

        ONE STRUCTURE IN MULTIPLE VARIABLES
        You can use a comma (,) to use one structure in many variables:
        struct {
            int myNum;
            string myString;
        } myStruct1, myStruct2, myStruct3; 
        // Multiple structure variables separated with commas

        NAMED STRUCTURES
        By giving a name to the structure, you can treat it as a data 
        type. This means that you can create variables with this 
        structure anywhere in the program at any time.

        To create a named structure, put the name of the structure 
        right after the struct keyword:
        struct myDataType { // This structure is named "myDataType"

        To declare a variable that uses the structure, use the name 
        of the structure as the data type of the variable.
        myDataType myVar;
    */
    cout << "\nMyPerson..." << endl;
    myPerson.nit = 10238123;
    myPerson.nombre = "Jeronimo";
    cout << "nit persona: " << myPerson.nit << endl;
    cout << "nombre persona: " << myPerson.nombre << endl;

    cout << "\nMyFruit..." << endl;
    myFruit mango;
    mango.nombre = "mango";
    mango.precio = 1250.20;
    cout << "nombre fruta: " << mango.nombre << endl;
    cout << "precio fruta: " << mango.precio << endl;

    cout << "\nMyCar..." << endl;
    myCar auto1;
    auto1.nombre = "McLaren";
    auto1.precio = 23000.5;
    auto1.color = "Blue";
    auto1.mostrar();

    return 0;
}