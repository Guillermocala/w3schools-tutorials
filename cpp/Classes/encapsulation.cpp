#include <iostream>

using namespace std;

class Employee {
    private:
        // Private attribute
        int salary;

        public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};

int main() {
    /*
        ENCAPSULATION
    The meaning of Encapsulation, is to make sure that "sensitive" data 
    is hidden from users. To achieve this, you must declare class 
    variables/attributes as private (cannot be accessed from outside 
    the class). If you want others to read or modify the value of a 
    private member, you can provide public get and set methods.

    To access a private attribute, use public "get" and "set" methods.

    Why?
    - Encapsulation ensures better control of your data, because you 
    (or others) can change one part of the code without affecting 
    other parts.
    - Increased security of data.
    */
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();

    return 0;
}