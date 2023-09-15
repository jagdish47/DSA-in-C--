#include <bits/stdc++.h>
using namespace std;

int firstOccuranceBS(vector<int> arr, int x)
{

    int firstOccurance = -1;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            firstOccurance = mid;
            end = mid - 1;
        }

        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return firstOccurance;
}

int main()
{

    vector<int> arr{1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x = 5;

    int ans = firstOccuranceBS(arr, x);

    cout << "First Occurance : " << ans << endl;
}