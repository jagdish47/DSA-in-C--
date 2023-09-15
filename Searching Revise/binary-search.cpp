#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{8, 11, 23, 44, 56, 78, 99, 100};
    int target = 99;

    int ans = binarySearch(arr, target);
    cout << ans << endl;

    return 0;
}