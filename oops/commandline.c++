#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    // Check if the correct number of arguments is provided
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    // Open the file passed as the first command-line argument
    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Error: Could not open the file " << argv[1] << endl;
        return 1;
    }

    // Read and display the contents of the file
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close(); // Close the file
    return 0;
}
