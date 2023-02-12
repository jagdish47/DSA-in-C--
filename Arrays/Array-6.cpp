#include <iostream>
using namespace std;

int numberOfTimeOccure(int arr[], int size, int number)
{

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int arr[] = {2, 3, 4, 5, 6, 7, 4, 4, 56, 7, 2, 3, 2, 3, 4, 2, 3};
    int size = 17;
    int number = 7;

    cout << numberOfTimeOccure(arr, size, number) << endl;

    return 0;
}