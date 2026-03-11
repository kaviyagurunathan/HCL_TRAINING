#include<iostream>
#include<initializer_list>
using namespace std;
class Matrix
{
private:
    int rows;
    int cols;
    int **data;
public:
    Matrix(int r, int c, initializer_list<int> values)
    {
        rows = r;
        cols = c;
        data = new int*[rows];
        for(int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
        int k = 0;
        for(int v : values)
        {
            data[k/cols][k%cols] = v;
            k++;
        }
    }
    void display()
    {
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~Matrix()
    {
        for(int i=0;i<rows;i++)
        {
            delete[] data[i];
        }

        delete[] data;
        cout << "Memory released\n";
    }
};
int main()
{
    Matrix m(2,3,{1,2,3,4,5,6});
    m.display();
}

