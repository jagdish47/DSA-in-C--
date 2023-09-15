#include <bits/stdc++.h>
using namespace std;

int lastOccuranceBS(vector<int> arr, int X)
{

    int lastOccurance = -1;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == X)
        {

            lastOccurance = mid;
            start = mid + 1;
        }
        else if (X > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return lastOccurance;
}

int main()
{

    vector<int> arr{1, 3, 5, 5, 5, 5, 67, 123, 125};
    int X = 5;

    int ans = lastOccuranceBS(arr, X);
    cout << "Last Occurance : " << ans << endl;

    return 0;
}