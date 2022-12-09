#include <bits/stdc++.h>
using namespace std;

string removeDuplicateFromString(string str, int k)
{

    vector<pair<int, char>> st;

    for (auto c : str)
    {

        if (st.size() == 0 || st.back().first != c)
        {
            st.push_back({c, 1});
        }
        else
        {
            st.back().second++;
        }

        if (st.back().second == k)
        {
            st.pop_back();
        }
    }

    string ans;
    for (auto x : st)
    {
        ans.append(x.second, x.first);
    }

    return ans;
}

int main()
{
    string str = "deeedbbcccbdaa";
    int k = 3;

    cout << removeDuplicateFromString(str, k) << endl;

    return 0;
}