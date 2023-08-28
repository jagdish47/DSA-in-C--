#include <bits/stdc++.h>
using namespace std;

void isAnagram(string a, string b)
{

    if (a.size() != b.size())
    {
        // return false;
    }

    unordered_map<char, int> umap;

    for (int i = 0; i < a.size(); i++)
    {
        umap[a[i]]++;
    }

    for (auto x : umap)
    {

        cout << x.first << " " << x.second << endl;
    }
}

int main()
{

    string a = "geeksforgeeks";
    string b = "forgeeksgeeks";

    // cout << isAnagram(a, b) << endl;
    isAnagram(a, b);
    return 0;
}