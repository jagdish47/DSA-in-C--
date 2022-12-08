#include <iostream>
#include <stack>
using namespace std;

string removeAdjacentDuplicate(stack<char> st, string str)
{

    string newStr = "";

    for (int i = 0; i < str.length(); i++)
    {

        if (st.empty() || st.top() != str[i])
        {
            st.push(str[i]);
        }
        else
        {
            st.pop();
        }
    }

    while (!st.empty())
    {
        char ch = st.top();
        st.pop();
        newStr += ch;
    }

    return newStr;
}

int main()
{

    stack<char> st;
    string str = "abbaca";

    string ans = removeAdjacentDuplicate(st, str);

    cout << ans << endl;
    for (int i = ans.length() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
    return 0;
}