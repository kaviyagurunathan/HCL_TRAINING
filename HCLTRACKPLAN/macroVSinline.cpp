#include <iostream>
using namespace std;

#define SQR(x) ((x) * (x))  // correct macro

inline int sqrFunc(int x) {
    return x * x;
}

int main() {
    int a = 2, b = 3;

    cout << "Macro: " << SQR(a + b) << endl;
    cout << "Function: " << sqrFunc(a + b) << endl;

    return 0;
}