#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int arr[] = {123, 32, 2, 3, 23, 1, -7};
    int size = 7;

    cout << "minimum : " << findMin(arr, size) << endl;
}