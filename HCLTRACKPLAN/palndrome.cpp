#include <iostream>
using namespace std;

int main() {
    string str;
    int flag = 1;

    cout << "Enter string: ";
    cin >> str;

    int len = str.length();

    for(int i=0;i<len/2;i++) {
        if(str[i] != str[len-i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}