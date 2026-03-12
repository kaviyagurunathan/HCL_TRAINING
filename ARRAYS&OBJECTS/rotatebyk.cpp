#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int arr[], int n, int k)
{
    k = k % n;

    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    rotate(arr,n,2);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}