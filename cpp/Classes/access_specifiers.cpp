#include <iostream>

using namespace std;

class MyClass {
  	public:    // Public access specifier
		int x;   // Public attribute

  	private:   // Private access specifier
		int y;   // Private attribute
};

// Base class
class Employee {
  	protected: // Protected access specifier
		int salary;
};

// Derived class
class Programmer: public Employee {
	public:
		int bonus;
		void setSalary(int s) {
			salary = s;
		}
		int getSalary() {
			return salary;
		}
		void setDato_privado(int dato_privado){
			this->dato_privado = dato_privado;
		}
		int getDato_privado(){
			return dato_privado;
		}
	private:
		int dato_privado;
};

int main() {
    /*
        ACCESS SPECIFIERS
    The public keyword is an access specifier. Access specifiers define how 
    the members (attributes and methods) of a class can be accessed.
    In C++, there are three access specifiers:

    - public = members are accessible from outside the class
    - private = members cannot be accessed (or viewed) from outside the class
    - protected = members cannot be accessed from outside the class,
    however, they can be accessed in inherited classes.

    By default, all members of a class are private if you don't specify 
    an access specifier.
    It is possible to access private members of a class using a public 
    method inside the same class.
    */
    MyClass myObj;
    myObj.x = 25;  // Allowed (public)
    // myObj.y = 50;  // Not allowed (private)
	Programmer objeto1;
	objeto1.setSalary(2000000);
	objeto1.setDato_privado(2022);
	cout << "El salario es: " << objeto1.getSalary() << endl;
	cout << "El dato privado es: " << objeto1.getDato_privado() << endl;

    return 0;
}