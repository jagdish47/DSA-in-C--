#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    // cout << st.size() << endl;
    // cout << st.empty() << endl;
    // cout << st.top() << endl;

    // for (int i = 1; i <= 6; i++)
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}