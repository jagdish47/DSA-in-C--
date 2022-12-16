#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1;
    st1.push(3);
    st1.push(4);
    st1.push(5);
    st1.push(6);

    stack<int> st2;
    st2.push(30);
    st2.push(40);
    st2.push(50);
    st2.push(60);

    int arr[st1.size() + st2.size()];

    int top1 = 0;
    int top2 = st1.size() + st2.size() - 1;

    for (int i = 0; i < st1.size(); i++)
    {
        arr[top1] = st1.top();
        top1++;
    }

    for (int j = st2.size(); j >= 0; j++)
    {
        arr[top2] = st2.top();
        top2--;
    }

    return 0;
}