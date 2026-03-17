#include <iostream>
#include <cmath>
using namespace std;

class MathOps {
public:
    static int pow(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

    static double pow(double base, double exp) {
        return std::pow(base, exp);
    }
};

class Function {
public:
    virtual double evaluate(double x) {
        return x;
    }
};

class Square : public Function {
public:
    double evaluate(double x) override {
        return x * x;
    }
};

class Cube : public Function {
public:
    double evaluate(double x) override {
        return x * x * x;
    }
};

int main() {
    cout << "Int pow: " << MathOps::pow(2, 3) << endl;
    cout << "Double pow: " << MathOps::pow(2.5, 2.0) << endl;

    Function* f;

    Square s;
    Cube c;

    f = &s;
    cout << "Square: " << f->evaluate(3) << endl;

    f = &c;
    cout << "Cube: " << f->evaluate(3) << endl;

    return 0;
}