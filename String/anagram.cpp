#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{

    if (a.size() != b.size())
    {
        return false;
    }

    unordered_map<char, int> umap;

    for (int i = 0; i < a.size(); i++)
    {
        umap[a[i]]++;
    }

    for (int i = 0; i < b.size(); i++)
    {

        char ch = b[i];

        if (umap.find(ch) != umap.end())
        {

            auto itr = umap.find(ch);

            if (itr->second > 0)
            {
                itr->second--;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string a = "geeksforgeeks";
    string b = "forgeeksgeeks";

    cout << isAnagram(a, b) << endl;
    // isAnagram(a, b);
    return 0;
}