#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "anagram";
    string str2 = "managar";

    vector<int> vec(256, 0); // created a vector whose size is 255 and marked all as 0(zero)

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // vec[(int)ch]++; //if you want to conver manually you can do that
        vec[ch]++; // because we already taking integer vector so it will convert automatically
    }

    for (int i = 0; i < str2.length(); i++)
    {
        char ch = str2[i];
        vec[ch]--;
    }

    for (int i = 0; i < vec.size(); i++)
    {

        if (vec[i] != 0)
        {
            cout << "FALSE" << endl;
        }
    }
    cout << "TRUE" << endl;

    return 0;
}