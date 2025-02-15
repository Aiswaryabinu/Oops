#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write to the file
    ofstream file("test.txt"); // Create an object for the file
    if (file.is_open()) { 
        string userInput;
        cout << "Enter the text you want to write to the file: ";
        getline(cin, userInput); // Read the text from the user
        file << userInput << endl; // Write the text to the file
        file.close();
        cout << "Text written to file successfully." << endl;
    } else {
        cout << "Failed to open the file." << endl;
        return 1; // Exit if file creation fails
    }

    // Read from the file
    ifstream readFile("test.txt"); // Open the file for reading
    if (readFile.is_open()) {
        string fileContent;
        cout << "Reading the text from the file:" << endl;
        while (getline(readFile, fileContent)) { // Read the file line by line
            cout << fileContent << endl; // Print the file content to the console
        }
        readFile.close();
    } else {
        cout << "Failed to open the file for reading." << endl;
    }

    return 0;
}
