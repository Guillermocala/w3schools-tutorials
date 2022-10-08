#include <iostream>
#include "MyClass.h"

using namespace std;


int main(){
    Persona persona1(123, "Guillermo", 24);

    cout << "persona1..." << endl;
    persona1.showData();
    return 0;
}

