#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if (isalpha(ch)) {
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
    else if (isdigit(ch))
        cout << "Digit";
    else
        cout << "Special Character";

    return 0;
}