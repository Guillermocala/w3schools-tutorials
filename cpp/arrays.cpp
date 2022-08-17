#include <iostream>

using namespace std;

int main() {
    /*
        Arrays are used to store multiple values(of the same type) in a single 
        variable, instead of declaring separate variables for each value.
        To declare an array, define the variable type, specify the name of the array 
        followed by square brackets and specify the number of elements it should store.
        To insert values to it, we can use an array literal - place the values in a 
        comma-separated list, inside curly braces.    
    */
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};
    /*
        You access an array element by referring to the index number inside square brackets []
    */
    cout << "Auto en la posicion 1: " << cars[1] << endl;
    /*
        To change the value of a specific element, refer to the index number.
    */
    cars[1] = "Opel";
    cout << "Despues de modificar la posicion 1..." << endl;
    cout << "Auto en la posicion 1: " << cars[1] << endl;
    /*
        It is also possible to declare an array without specifying the elements on declaration
        and add them later.
    */
    string cities[3];
    cities[0] = "Santa Marta";
    cities[1] = "Cartagena";
    cities[2] = "Santander";
    /*
        You can loop through the array elements with the for loop.
    */
    cout << "Autos recorridos con ciclo FOR" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Auto - " << i << " : " << cars[i] << "\n";
    }
    /*
        You don't have to specify the size of the array. But if you don't, it will 
        only be as big as the elements that are inserted into it
        string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
    
        This is completely fine. However, the problem arise if you want extra space 
        for future elements. Then you have to overwrite the existing values.
        If you specify the size however, the array will reserve the extra space.
        string cars[5] = {"Volvo", "BMW", "Ford"}; 
        // size of array is 5, even though it's only three elements inside it
    
        To get the size of an array, you can use the sizeof() operator.
        To find out how many elements an array has, you have to divide the size 
        of the array by the size of the data type it contains.
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << "El tamanio del array myNumbers es: " << getArrayLength << endl;
    for (int i = 0; i < getArrayLength; i++){
        cout << "numero: " << myNumbers[i] << endl;
    }
    return 0;
}