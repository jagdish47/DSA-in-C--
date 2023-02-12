#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int find)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int arr[] = {23, 54, 43, 3, 5, 4, 10};
    int size = 7;
    int find = 100;

    if (isPresent(arr, size, find))
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;

    return 0;
}