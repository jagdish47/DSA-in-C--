#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[][4], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMin(int arr[][4], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 9, 8, 6}, {1, 1, 1, 1}};

    int size = 4;

    cout << findMax(arr, size) << endl;
    cout << findMin(arr, size) << endl;
}