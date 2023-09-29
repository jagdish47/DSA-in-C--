#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "asdfasdfasdfaas";

    map<char, int> mp;

    for (auto ch : str)
    {
        mp[ch]++;
    }

    int maxi = INT_MIN;
    char chh;

    for (auto itrr : mp)
    {
        if (itrr.second > maxi)
        {
            maxi = itrr.second;
            chh = itrr.first;
        }
    }

    cout << "Maxiumu Frequency : " << maxi << endl;
    cout << "Character Frequency : " << chh << endl;

    // for (auto itr : mp)
    // {
    //     cout << itr.first << " : " << itr.second << endl;
    // }

    return 0;
}