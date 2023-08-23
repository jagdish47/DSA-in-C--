#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {3, 1, 3, 3, 2};
    int N = 5;

    unordered_map<int, int> umap;

    for (int i = 0; i < N; i++)
    {
        umap[a[i]]++;
    }

    for (auto x : umap)
    {
        cout << x.second << endl;
    }

    cout << N / 2 << endl;

    return 0;
}