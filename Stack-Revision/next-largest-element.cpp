#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 4};
    int size = *(&arr + 1) - arr;

    stack<int> st;

    vector<int> v;

    for (int i = size - 1; i >= 0; i--)
    {
        if (st.size() == 0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() > arr[i])
        {
            v.push_back(st.top());
        }

        else if (st.size() > 0 && st.top() < arr[i])
        {
            while (st.size() > 0 && st.top() <= arr[i])
            {
                st.pop();
            }

            if (st.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
        }

        st.push(arr[i]);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    return 0;
}