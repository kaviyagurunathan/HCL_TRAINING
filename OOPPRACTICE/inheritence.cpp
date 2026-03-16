#include<iostream>
using namespace std;

class Person
{
public:
    string name;
};

class Employee : public Person
{
public:
    int salary;

    void display()
    {
        cout<<name<<" "<<salary;
    }
};

int main()
{
    Employee e;

    e.name="Kaviya";
    e.salary=50000;

    e.display();
}