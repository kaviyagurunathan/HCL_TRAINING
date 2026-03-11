#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int *ptr = arr;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    cout << "Average: " << (float)sum/n;
    return 0;
}