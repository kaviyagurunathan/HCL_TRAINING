#include<iostream>
using namespace std;
class Student{
    public:
    int* marks;
    Student (int x){
        marks = new int;
        *marks = x;
    }
    Student(const Student &s){
        marks = new int;
        *marks = *(s.marks);
    }
};
int main(){
    Student s1(31);
    Student s2 = s1;

    *s2.marks = 12;


    cout << "Student1 Mark is --> : " << (*s1.marks) << endl;
    cout << "Student2 Mark is--> : " << (*s2.marks) << endl;
}