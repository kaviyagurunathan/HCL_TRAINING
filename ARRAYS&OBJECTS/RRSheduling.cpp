#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int processes[] = {5,3,7};
    int quantum = 2;

    for(int i=0;i<3;i++)
        q.push(processes[i]);

    while(!q.empty())
    {
        int time = q.front();
        q.pop();

        if(time > quantum)
        {
            cout<<"Executed "<<quantum<<endl;
            q.push(time - quantum);
        }
        else
        {
            cout<<"Executed "<<time<<endl;
        }
    }
}