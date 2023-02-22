#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{

    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }

        if (arr[s] >= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{7, 1, 2, 3, 4, 5, 6};

    cout << findPivot(arr) << endl;
    return 0;
}