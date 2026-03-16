#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s = "1234";

    reverse(s.begin(), s.end());

    cout << s;
}