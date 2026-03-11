#include<iostream>
using namespace std;
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}

int main(){
    int (*operation)(int,int);
    operation = add;
    operation(2,3);
    operation = sub;
    operation(2,3);
    operation = mul;
    operation(2,3);

}