#include<iostream>
using namespace std;

int main(){
    int number,num;
    int reverse=0;

    cin >> number;

    while(number!=0){
        num = number%10;
        reverse = reverse*10 + num;
        number = number/10;
        
    }
    cout << reverse ;
    return 0;
}