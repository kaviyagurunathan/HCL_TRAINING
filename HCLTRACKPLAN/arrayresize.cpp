#include <iostream>
using namespace std;

int main() {

    int capacity = 2;
    int size = 0;

    int *arr = new int[capacity];

    for(int i=0;i<5;i++) {

        if(size == capacity) {

            capacity = capacity * 2;

            int *temp = new int[capacity];

            for(int j=0;j<size;j++)
                temp[j] = arr[j];

            delete[] arr;
            arr = temp;
        }

        arr[size++] = i;
    }

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    delete[] arr;

    return 0;
}