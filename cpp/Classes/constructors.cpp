#include <iostream>

using namespace std;

class MyClass {     // The class
    public:           // Access specifier
    MyClass() {     // Constructor
        cout << "Hello World! From the constructor" << endl;
    }
};

class Car {        // The class
    public:          // Access specifier
        string brand;  // Attribute
        string model;  // Attribute
        int year;      // Attribute

        /*
            Podemos dejar en los parametros los mismos nombres que los atributos
            pero para diferenciar cual es cual, a los atributos de la clase
            los referenciamos con this->
            así no se genera ningun choque porque se realiza la distinción
        */
        Car(string brand, string model, int year) { // Constructor with parameters
            this->brand = brand;
            this->model = model;
            this->year = year;
        }
        /*
            Metodo generico para imprimir los datos del objeto y no hacerlo
            uno por uno desde el main
        */
        void imprimir(){
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

class Car2 {
    public:
        string brand;
        string model;
        int year;
        Car2(string brand, string model, int year);
        void imprimir();
};

int main() {
    /*
        CONSTRUCTORS
    is a special method that is automatically called when an object of a 
    class is created.
    To create a constructor, use the same name as the class, followed by 
    parentheses ().
    The constructor has the same name as the class, it is always public, 
    and it does not have any return value.

    Constructor parameters
    Constructors can also take parameters (just like regular functions),
    which can be useful for setting initial values for attributes.
    When we call the constructor (by creating an object of the class), we
    pass parameters to the constructor, which will set the value of the 
    corresponding attributes to the same.

    Just like functions, constructors can also be defined outside the class.
    First, declare the constructor inside the class, and then define it
    outside of the class by specifying the name of the class, followed by
    the scope resolution :: operator, followed by the name of the 
    constructor (which is the same as the class).
    For methods and procedures just follow:
    prototype ClassName::name_function/procedure()
    */

    MyClass object1;

    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << "\t\tClass Car" << endl;
    cout << "\tCar 1" << endl;
    carObj1.imprimir();
    cout << "\tCar 2" << endl;
    carObj2.imprimir();

    Car2 carObj3("Acura", "XLR-24", 1999);
    Car2 carObj4("Bentley", "Family-friendly", 1969);

    cout << "\t\tClass Car2" << endl;
    cout << "\tCar 1" << endl;
    carObj3.imprimir();
    cout << "\tCar 2" << endl;
    carObj4.imprimir();

    return 0;
}

Car2::Car2(string brand, string model, int year){
    this->brand = brand;
    this->model = model;
    this->year = year;
}

/*
    Para metodos y procedimientos en la definicion se añade un paso extra
    a la forma ya conocida:
    Normal: prototipo nombre_funcion/procedimiento(parametros){
        codigo
    }
    Class: prototipo nombre_clase::nombre_funcion/prodecimiento(parametros){
        codigo
    }
*/

void Car2::imprimir(){
    // Esta es una forma de imprimir con un solo cout
    cout << "Brand: " << brand << endl
    << "Model: " << model << endl
    << "Year: " << year << endl;
}
