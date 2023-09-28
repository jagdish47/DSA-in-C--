#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[7] = {1, 3, 4, 7, 9, 10, 12};

    int start = 2;
    int end = 5;

    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }

    if (start != 0)
    {
        cout << arr[end] - arr[start - 1] << endl;
    }
    else
    {
        cout << arr[r] << endl;
    }

    /**
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l, r;
        cin >> l;
        cin >> r;
        int ans = 0;
        for (int j = l; j <= r; j++)
        {
            ans += arr[j];
        }
        cout << ans << endl;
    */

    return 0;
}