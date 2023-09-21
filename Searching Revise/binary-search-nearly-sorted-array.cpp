#include <bits/stdc++.h>
using namespace std;

int binarySearchNSA(vector<int> &arr, int x)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        // if ((mid >= 0) && x == arr[mid] || x == arr[mid - 1] || x == arr[mid + 1])
        // {
        //     return 1;
        // }

        if (x == arr[mid])
        {
            return mid;
        }
        if ((mid + 1 < arr.size()) && x == arr[mid + 1])
        {
            return mid + 1;
        }
        if ((mid - 1 >= 0) && x == arr[mid - 1])
        {
            return mid - 1;
        }

        else if (arr[mid] > x)
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int x = 70;

    int ans = binarySearchNSA(arr, x);

    cout << ans << endl;

    return 0;
}