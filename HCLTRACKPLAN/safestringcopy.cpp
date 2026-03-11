#include<iostream>
using namespace std;
void stringcopy(char arr[] , char newarr[] ,int size){
    int i;
    for( i = 0;i<size-1 && arr[i]!='\0';i++){
        newarr[i] = arr[i];
    }
    newarr[i] = '\0';
}
int main(){
    char arr[] = "programming";
    char newarr[10];

    stringcopy(arr , newarr,10);
    cout << "this is new coped arr: " << newarr;
    
}
