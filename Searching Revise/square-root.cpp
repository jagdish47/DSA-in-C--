#include <bits/stdc++.h>
using namespace std;

int findSquareRootBS(int num)
{

    int start = 0;
    int end = num;
    int ans = 0;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        int squrtRoot = mid * mid;

        if (squrtRoot <= num)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (squrtRoot > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    int num;

    cout << "enter a number : ";
    cin >> num;

    cout << findSquareRootBS(num) << endl;

    return 0;
}