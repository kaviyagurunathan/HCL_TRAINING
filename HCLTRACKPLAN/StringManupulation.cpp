#include<iostream>
using namespace std;
class Stringmanipulation{
    public:
    int count =1;
    Stringmanipulation(string s){
        for(int i =0 ; i< s.length();i++){
            if(s[i] == s[i+1]){
                count++ ;
            }
            else{
                cout << "The count of " << s[i] << "is" << count<< endl;
                count = 1;
            }
            
        }
    }
};
int main(){
    Stringmanipulation S("aaabc");

}