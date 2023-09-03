#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "dabaabcbcabcabc";
    string part = "abc";

    int pos = s.find(part); // it will match the string "abc" and give you first char index

    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }

    cout << s << endl;

    return 0;
}