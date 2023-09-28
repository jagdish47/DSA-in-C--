#include <bits/stdc++.h>
using namespace std;

int main()
{

    // taking input
    int n;
    cout << "enter size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int p[n];

    for (int i = 0; i < n; i++)
    {
        p[i] = 0;

        for (int j = 0; j <= i; j++)
        {
            p[i] += arr[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}