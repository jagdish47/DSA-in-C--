#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return fun(n - 1) + fun(n - 1);
}

int main()
{

    int n = 10;
    int ans = fun(3);
    cout << ans << endl;

    return 0;
}