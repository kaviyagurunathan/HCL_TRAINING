#include <iostream>
using namespace std;

class Device {
public:
    string brand;
};

class Phone : virtual public Device {};
class Camera : virtual public Device {};

class SmartPhone : public Phone, public Camera {
public:
    void setBrand(string b) {
        brand = b;
    }
    void display() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    SmartPhone s;
    s.setBrand("Apple");
    s.display();

    return 0;
}