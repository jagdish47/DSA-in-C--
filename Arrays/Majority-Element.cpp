#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &a, int size)
{

    int times = size / 2;
    int count = 0;

    unordered_map<int, int> umap;

    for (int i = 0; i < size; i++)
    {
        umap[a[i]]++;
    }

    for (auto ele : umap)
    {
        if (ele.second > times)
        {
            count++;
        }
    }

    if (count > 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> a = {3, 1, 3, 3, 2};
    int N = 5;
    cout << majorityElement(a, N) << endl;
    return 0;
}