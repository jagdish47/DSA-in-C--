#include <bits/stdc++.h>
using namespace std;

bool isomorphicString(string s, string t)
{

    char map_s[128] = {0};
    char map_t[128] = {0};

    for (int i = 0; i < s.size(); i++)
    {

        if (map_s[s[i]] != map_t[t[i]])
        {

            return false;
        }

        map_s[s[i]] = i

            return true;
    }

    int main()
    {

        string s = "egg";
        string t = "add";

        bool ans = isomorphicString(s, t);

        cout << "Answer : " << ans << endl;

        return 0;
    }