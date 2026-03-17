#include<iostream>
using namespace std;
int main(){
    int x =10;
    int* ptr = &x;
    int** ptoptr = &ptr;
     **ptoptr = 40;
    cout << "X value is -- > " << " " << x;

}