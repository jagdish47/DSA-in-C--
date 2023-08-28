#include <bits/stdc++.h>
using namespace std;

void binarySubstring(int n, string a)
{

    int countOfOne = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            countOfOne++;
        }
    }

    int count = (countOfOne * (countOfOne - 1)) / 2;

    cout << count << endl;
}

int main()
{

    int N = 4;
    string S = "1111";

    // cout << binarySubstring(N, S) << endl;
    binarySubstring(N, S);
    return 0;
}