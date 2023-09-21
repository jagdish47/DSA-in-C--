#include <bits/stdc++.h>
using namespace std;

int divideTwoNumberBS(int divident, int divisor)
{

    int start = 0;
    int end = abs(divident);
    int ans = 0;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (abs(mid * divisor) <= abs(divident))
        {
            ans = mid;
            break;
        }

        if (abs(mid * divisor) > abs(divident))
        {
            end = mid - 1;
        }
        else
        {
            ans = mid; // storing ans
            start = mid + 1;
        }
    }

    if ((divisor < 0 && divident < 0) || (divisor > 0 && divident > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{

    int divident = -10000;
    int divisor = 23;

    int ans = divideTwoNumberBS(divident, divisor);

    cout << ans << endl;

    return 0;
}