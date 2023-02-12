#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int start = 0;
    int end = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[start] << " ";
            start++;
        }
        else
        {
            cout << arr[end] << " ";
            end--;
        }
    }

    return 0;
}