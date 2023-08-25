#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &num, int start, int end)
{

    while (start < end)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    int n = arr.size();

    k = k % n;

    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}