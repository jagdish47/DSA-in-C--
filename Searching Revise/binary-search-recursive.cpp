#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> arr, int end, int k, int start = 0)
{

    int mid = start + (end - start) / 2;

    if (arr[mid] == k)
    {
        return mid;
    }

    if (start > end)
    {
        return -1;
    }

    else if (k > arr[mid])
    {
        return binarysearch(arr, end, k, start = mid + 1);
    }

    else
    {
        return binarysearch(arr, end = mid - 1, k, start);
    }
}

int main()
{

    vector<int> arr{3, 4, 55, 66, 78, 99, 200};
    int start = 0;
    int end = arr.size() - 1;
    int target = 99;

    int ans = binarysearch(arr, end, target, start);

    cout << "Answer : " << ans << endl;
}