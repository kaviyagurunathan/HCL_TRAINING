#include <iostream>
using namespace std;

int main() {
    string str;
    int length = 0;

    cout << "Enter string: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++) {
        length++;

        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Length: " << length << endl;
    cout << "Uppercase: " << str;

    return 0;
}