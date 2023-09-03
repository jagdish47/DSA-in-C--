#include <bits/stdc++.h>
using namespace std;

bool isAnagramSort(string a, string b)
{

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isAnagramFrequecy(string a, string b)
{

    if (a.length() != b.length())
    {
        return false;
    }

    unordered_map<char, int> first;
    unordered_map<char, int> second;

    /**
     * map<char, int> first;
     * map<char, int> second;
     * unordered_map and map both will be work here
     */

    for (int i = 0; i < a.length(); i++)
    {
        first[a[i]]++;
    }

    for (int j = 0; j < b.length(); j++)
    {
        second[b[j]]++;
    }

    if (first == second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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

    string a = "nagaram";
    string b = "ramnaga";

    // cout << isAnagram(a, b) << endl;
    // cout << isAnagramSort(a, b) << endl;
    cout << isAnagramFrequecy(a, b) << endl;
    return 0;
}