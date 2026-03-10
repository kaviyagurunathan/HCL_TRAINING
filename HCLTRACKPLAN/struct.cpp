#include <iostream>
using namespace std;
struct Customer{
    int id;
    string name;
};
struct Order
{
    int orderid;
    string productname;
    int quantity;
    Customer c;
};
int main(){
    Order o;
    o.orderid = 01;
    o.productname = "Royal-Enfield";
    o.c.name = "Kaviya";

    cout << o.c.name << " "<< o.productname << o.orderid << endl;
    
}

