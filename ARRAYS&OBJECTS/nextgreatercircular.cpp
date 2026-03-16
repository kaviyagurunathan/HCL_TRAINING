#include<iostream>
#include<stack>
using namespace std;

void nextGreater(int arr[], int n)
{
    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }

        if(st.empty())
            cout << arr[i] << " -> -1" << endl;
        else
            cout << arr[i] << " -> " << st.top() << endl;

        st.push(arr[i]);
    }
}

int main()
{
    int arr[] = {4,5,2,10,8};
    int n = 5;

    nextGreater(arr,n);
}
