#include <iostream>

using namespace std;

// Base class
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n" ;
        }
};

// Derived class
class Car: public Vehicle {
    public:
        string model = "Mustang";
};

// Derived class
class Bike: public Vehicle{
    public:
        string 
}

// Derived class from a derived class(Multilevel inheritance)
class SecondCar: public Car{
};

// Derived class from 2 classes(Multiple inheritance)
class MixedClass: public Car, public Bike{
};

int main() {
    /*
        INHERITANCE
    is possible to inherit attributes and methods from one class to another.
    We group the "inheritance concept" into two categories:

    - derived class (child) - the class that inherits from another class
    - base class (parent) - the class being inherited from
    To inherit from a class, use the : symbol.

    Why
    It is useful for code reusability: reuse attributes and methods of 
    an existing class when you create a new class.

    MULTILEVEL INHERITANCE
    A class can also be derived from one class, which is already derived 
    from another class.

    MULTIPLE INHERITANCE
    A class can also be derived from more than one base class
    using a comma-separated list.

    */
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}