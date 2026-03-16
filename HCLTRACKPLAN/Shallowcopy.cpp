#include<iostream>
using namespace std;
class Student{
  public :
    int *marks;
    Student(int x){
        marks = new int;
        *marks = x;
}
};
int main(){
    Student s1(98);
    Student s2 = s1;

    *s2.marks = 70;

    cout << "Student Mark 1 : " << *s1.marks << endl;
    cout << "Student Mark 2 : " << *s2.marks << endl;
    
}