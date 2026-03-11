#include<iostream>
using namespace std;
class Dynamicarray{
    int size;
    int capacity;
    int *arr;

    public:

    Dynamicarray(){
        size = 0;
        capacity = 2;
        arr = new int[capacity];
    }
    void push(int x){
        if(size == capacity){
            capacity*=2;
            int *newarr = new int[capacity];
            for(int i =0;i<size;i++)
                newarr[i] = arr[i];

            delete[] arr;
            arr = newarr;
            
        }
        arr[size++] = x;
    }
    void pop(){
        if(size >0){
            arr[size--];
        }
    }
    void display() {

        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }
};
int main(){
    Dynamicarray d;
    d.push(20);
    d.push(40);
    d.push(60);
    d.push(80);
    d.pop();
    d.display();
}