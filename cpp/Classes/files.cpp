#include <iostream>
#include <fstream>

using namespace std;

int main() {
    /*
        FILES
    The fstream library allows us to work with files.
    To use the fstream library, include both the standard <iostream> 
    AND the <fstream> header file.

    - ofstream = Creates and writes to files
    - ifstream = Reads from files
    - fstream = A combination of ofstream and ifstream: creates, reads, 
    and writes to files

    CREATES AND WRITE ON FILES
    use either the ofstream or fstream class, and specify the name of the file.
    To write to the file, use the insertion operator (<<).

    READ A FILE
    use either the ifstream or fstream class, and the name of the file.
    we also use a while loop together with the getline() function (which 
    belongs to the ifstream class) to read the file line by line, and to
    print the content of the file
    */
    // Creates and open the text file
    ofstream MyFile("filexample1.txt");

    // Write to the file
    MyFile << "This is an example file" << endl;
    MyFile << "This is a content in the second line" << endl;
    MyFile << "hello world, im the 3rd line" << endl;
    
    // Close the file
    MyFile.close();

    // Read from the file
    ifstream MyReadFile("filexample1.txt");

    // Create a text string, which is used to output the text file
    string text;

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, text)) {
        // Output the text from the file
        cout << text << endl;
    }

    // Close the file
    MyReadFile.close();
    return 0;
}