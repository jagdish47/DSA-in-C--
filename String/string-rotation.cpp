#include <bits/stdc++.h>
using namespace std;

bool isRotation(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return false;
    }

    str1 = str1 + str1;

    if (str1.find(str2) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string str = "geeksforgeeks";

    string str2 = "forgeeksgeeks";

    bool ans = isRotation(str, str2);

    cout << ans << endl;

    return 0;
}