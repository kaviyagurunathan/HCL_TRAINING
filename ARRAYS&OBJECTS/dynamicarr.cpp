#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void input() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation
    Student* arr = new Student[n];

    for (int i = 0; i < n; i++) {
        arr[i].input();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        arr[i].display();
    }

    delete[] arr;

    return 0;
}