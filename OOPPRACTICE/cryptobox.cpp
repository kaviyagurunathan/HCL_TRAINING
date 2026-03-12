#include <iostream>
using namespace std;
class CryptoBox
{
private:
    string privateKey;
    string owner;

public:
    CryptoBox(string key, string name)
    {
        privateKey = key;
        owner = name;
    }
    friend void dumpForAudit(const CryptoBox& box);
};
void dumpForAudit(const CryptoBox& box)
{
    cout << "Audit Report" << endl;
    cout << "Owner: " << box.owner << endl;
    cout << "Private Key: " << box.privateKey << endl;
}
void normalFunction(const CryptoBox& box)
{
    cout << "Trying to access private data..." << endl;

}

int main()
{
    CryptoBox cb("A1B2C3D4", "Kaviya");
    dumpForAudit(cb);
    normalFunction(cb);

    return 0;
}