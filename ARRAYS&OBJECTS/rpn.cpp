#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Stack
{
    stack<int> st;

public:

    void operation(vector<string> txt)
    {
        for(string s : txt)
        {
            if(isdigit(s[0]))
            {
                st.push(stoi(s));
            }
            else
            {
                int var1 = st.top();
                st.pop();

                int var2 = st.top();
                st.pop();

                if(s == "+")
                    st.push(var2 + var1);

                else if(s == "-")
                    st.push(var2 - var1);

                else if(s == "*")
                    st.push(var2 * var1);

                else if(s == "/")
                    st.push(var2 / var1);
            }
        }

        cout << "Result = " << st.top();
    }
};

int main()
{
    Stack s;

    vector<string> txt = {"2","3","+","2","*"};

    s.operation(txt);
}