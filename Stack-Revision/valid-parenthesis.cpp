#include <bits/stdc++.h>
using namespace std;

bool validParenthesis(string s)
{

    stack<char> st;

    for (auto c : s)
    {
        if (st.empty())
        {
            st.push(c);
        }
        else if ((st.top() == '(' && c == ')') || (st.top() == '[' && c == ']') && st.top() == '{' && c == '}')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    if (st.size() == 0)
    {
        return true;
    }

    return false;
}

int main()
{

    string str = "()[]{}";
    cout << validParenthesis(str);

    return 0;
}