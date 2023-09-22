#include <bits/stdc++.h>
using namespace std;

int oddOccuranceElement(vector<int> &arr)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        if (start == end)
        {
            return start;
        }

        int mid = start + (end - start) / 2;

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    vector<int> vec{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};

    int ans = oddOccuranceElement(vec);
    cout << ans << endl;

    return 0;
}