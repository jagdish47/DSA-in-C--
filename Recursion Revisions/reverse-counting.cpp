#include <bits/stdc++.h>
using namespace std;

void reverseCount(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    reverseCount(n - 1);
}

int main()
{

    int n;
    cout << "Enter number ";
    cin >> n;

    reverseCount(n);

    return 0;
}