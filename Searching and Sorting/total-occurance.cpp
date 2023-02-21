#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (target == arr[mid])
        {
            ans = mid;
            e = mid - 1;
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

int lastOccurance(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (target == arr[mid])
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

    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7, 8};
    int target = 2;

    int first = firstOccurance(arr, target);
    int last = lastOccurance(arr, target);

    cout << first << endl;
    cout << last << endl;

    cout << "Total Occurance : " << last - first + 1 << endl;

    return 0;
}