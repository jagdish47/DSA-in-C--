#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> arr)
{

    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }

        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{0, 1, 2, 3, 4, 5, 4, 3, 2, 1};

    cout << peakElement(arr) << endl;
    ;

    return 0;
}