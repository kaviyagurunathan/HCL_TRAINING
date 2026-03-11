#include<iostream>
using namespace std;

class Rectangle{

    private:
    int width , height;

    public:
        void setwidth(int w){
            width = w;
        
    }
       void setheight(int h){
        height = h;
    }
   int area(){
        cout << width*height;
    }

};
int main(){
    Rectangle r;
    r.setwidth(10);
    r.setheight(15);

    cout << r.area();
}