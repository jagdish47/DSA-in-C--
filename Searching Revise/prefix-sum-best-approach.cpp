#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }

    for (int k = 0; k < n; k++)
    {

        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}