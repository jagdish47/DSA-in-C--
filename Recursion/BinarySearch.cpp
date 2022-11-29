#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{

    cout << endl
         << endl;

    for (int i = start; i < end; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

bool binarySearch(int arr[], int start, int size, int key)
{

    print(arr, start, size);

    if (start > size)
    {
        return false;
    }

    int mid = start + (size - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, size, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[] = {4, 6, 6, 7, 21, 32, 45, 67};
    int size = *(&arr + 1) - arr;

    int key = 67;
    int start = 0; 

    bool ans = binarySearch(arr, start, size, key);

    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not Present" << endl;
    }
}