#include <iostream>
using namespace std;

int findSquareRoot(int target)
{

    int start = 0;
    int end = target;
    int ans = -1;
    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int target;
    cout << "enter a square root : ";
    cin >> target;

    int ans = findSquareRoot(target);

    cout << ans << endl;

    return 0;
}