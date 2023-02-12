#include <iostream>
#include <limits.h>
using namespace std;

int findMaxi(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{

    int arr[] = {300, 6, 7, 4, 7, 8, 4, 10};
    int size = 8;

    cout << "maximum : " << findMaxi(arr, size) << endl;

    return 0;
}