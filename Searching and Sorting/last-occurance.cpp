#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> arr, int target)
{

    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    int target = 4;

    cout << lastOccurance(arr, target) << endl;

    return 0;
}