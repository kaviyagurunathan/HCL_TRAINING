#include<iostream>
using namespace std;

class Order{
    int id;
    string product;
    int qty;

public:

    Order(int i, string p, int q){
        id = i;
        product = p;
        qty = q;
    }

    void display(){
        cout << id << endl;
        cout << product << endl;
        cout << qty << endl;
    }
};

int main(){

    Order o(101,"Laptop",2);

    o.display();

}