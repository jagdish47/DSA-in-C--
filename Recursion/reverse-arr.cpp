#include <iostream>
using namespace std;

void reverseArr(int *arr, int start, int end)
{
    if (start == end)
    {
        return;
    }

    reverseArr(arr, start + 1, end);

    cout << arr[start] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6};
    int start = 0;
    int end = 7;

    reverseArr(arr, start, end);

    return 0;
}