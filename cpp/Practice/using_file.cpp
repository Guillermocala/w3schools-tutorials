#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream MyFile("filexample1.txt");
    if(MyFile){
       cout << "creado" << endl; 
    }
    else{
        cout << "no creado" << endl;
    }
    
    return 0;
}