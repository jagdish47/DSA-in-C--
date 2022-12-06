#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    string str = "anshu";

    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    while (!st.empty())
    {
        char ch = st.top();
        st.pop();
        cout << ch;
    }
    cout << endl;
}