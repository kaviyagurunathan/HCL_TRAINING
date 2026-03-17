#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("sample.txt", ios::in);
    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }

    file.close();

    file.open("sample.txt", ios::app);
    file << "\nTotal Lines: " << count;

    file.close();

    cout << "Line count appended successfully\n";

    return 0;
}