#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int lower, int higher)
{

    while (lower <= higher)
    {
        int mid = lower + (higher - lower) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            lower = mid + 1;
        }
        else
        {
            higher = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {3, 4, 5, 6, 15, 24, 26, 46, 78};
    int size = *(&arr + 1) - arr;
    int key = 46;

    int lower = 0;
    int higher = size - 1;

    int ans = binarySearch(arr, key, lower, higher);

    cout << ans;
}