#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if(password.length() > 8)
        cout << "Valid Password";
    else
        cout << "Password must be greater than 8 characters";

    return 0;
}
