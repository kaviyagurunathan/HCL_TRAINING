#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("sample.txt");

    if (outFile.is_open()) {
        outFile << "Hello Kaviya!\n";
        outFile << "Learning File Handling in C++\n";
        outFile.close(); 
        cout << "Data written successfully\n";
    } else {
        cout << "File could not be opened\n";
    }

    ifstream inFile("sample.txt");
    string line;

    cout << "\nReading file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}