#include <iostream>
using namespace std;

class Device {
protected:
    string brand;

public:
    void setDevice(string b) {
        brand = b;
    }
};

class Mobile : public Device {
protected:
    int simSlots;

public:
    void setMobile(string b, int sim) {
        setDevice(b);
        simSlots = sim;
    }
};

class Smartphone : public Mobile {
private:
    string os;

public:
    void setSmartphone(string b, int sim, string o) {
        setMobile(b, sim);
        os = o;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "SIM Slots: " << simSlots << endl;
        cout << "OS: " << os << endl;
    }
};

int main() {
    Smartphone s;
    s.setSmartphone("Samsung", 2, "Android");
    s.display();

    return 0;
}