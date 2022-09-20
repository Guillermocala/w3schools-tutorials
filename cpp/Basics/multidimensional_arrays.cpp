#include <iostream>

using namespace std;

int main() {
    /*
        A multi-dimensional array is an array of arrays.
        Each set of square brackets in an array declaration adds 
        another dimension to an array.
        Arrays can have any number of dimensions. The more dimensions 
        an array has, the more complex the code becomes.

        Remember that: Array indexes start with 0: [0] is the first element.

        ACCESS 
        To access an element of a multi-dimensional array, specify 
        an index number in each of the array's dimensions.

        MODIFY
        To change the value of an element, refer to the index number 
        of the element in each of the dimensions

        LOOP THROUGH
        you need one loop for each of the array's dimensions.
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 4; j++) {
                cout << letters[i][j] << "\n";
            }
        }

    */
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    cout << "El elemento de [0][2] es: " << letters[0][2] << endl;
    for(int i = 0; i < 2; i++) {
        cout << "{ ";
        for(int j = 0; j < 4; j++) {
            cout << letters[i][j] << " ";
        }
        cout << "}" << endl;
    }
    letters[0][2] = "K";
    cout << "El elemento de [0][2] es: " << letters[0][2] << endl;

    return 0;
}