#include <iostream>
using namespace std;

class Teacher {
public:
    virtual void work() {
        cout << "Teaching students" << endl;
    }
};

class Researcher {
public:
    virtual void work() {
        cout << "Doing research" << endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    void work() {
        cout << "Teaching + Researching" << endl;
    }
};

int main() {
    Professor p;
    p.work();

    return 0;
}