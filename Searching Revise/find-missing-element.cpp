#include <bits/stdc++.h>
using namespace std;

int findMissingElement(vector<int> arr)
{

    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (arr[mid] != mid + 1 && arr[mid - 1] == mid)
        {
            return mid + 1;
        }
        else if (arr[mid] != mid + 1)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{

    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 9, 10};
    int ans = findMissingElement(vec);
    cout << ans << endl;
}