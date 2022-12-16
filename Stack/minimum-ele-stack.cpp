#include <iostream>
#include <stack>
using namespace std;

int getMin(stack<int> st)
{
    int min = st.top();

    if (st.top() < min)
    {
        min = st.top();
        st.pop();
    }

    return min;
}

int main()
{

    stack<int> st;
    st.push(10);
    st.push(5);
    st.push(6);
    st.push(3);

    cout << getMin(st) << endl;
    return 0;
}