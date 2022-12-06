#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int arr[] = {3, 6, 3, 6, 78, 9};
    int size = *(&arr + 1) - arr;

    // creating stack
    stack<int> st;

    for (int i = 0; i < size; i++)
    {
        st.push(arr[i]);
    }

    while (st.empty() == false)
    {
        int x = st.top();
        st.pop();
        cout << x << " ";
    }
}