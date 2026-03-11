#include<iostream>
using namespace std;
int findSubstring(string text, string sub) {

    for(int i = 0; i <= text.length() - sub.length(); i++) {

        int j;

        for(j = 0; j < sub.length(); j++) {

            if(text[i + j] != sub[j])
                break;

        }

        if(j == sub.length())
            return i;
    }

    return -1;
}
int main(){
    string text,name;
    getline(cin , text);
    cout << "Enter name :";
    cin >> name;

    int position = findSubstring(text,name);
    if(position == -1){
        cout << "Element not found at the index";
    }
    else{
        cout << "Element found " << position << "index";
    }
    return 0;


}