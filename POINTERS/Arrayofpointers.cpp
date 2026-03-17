#include<iostream>
#include<string>
using namespace std;
int main(){
    int a  = 12;
    int  b = 23;
    int c = 34;
    int* arr[3] = {&a,&b,&c};

    for(int i =0;i<3;i++){
        cout << *arr[i] << endl;
    }
}
