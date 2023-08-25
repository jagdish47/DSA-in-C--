#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1 = "Hello how are you brother";
    string str2 = "brother";

    cout << str1.find(str2) << endl; // it will give you index of starting position

    if (str1.find(str2) != string::npos)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}