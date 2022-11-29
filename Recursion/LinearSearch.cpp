#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{

    if (size == 0)
    {
        return false;
    }

    if (arr[0] == k)
    {
        return true;
    }
    else
    {

        bool ans = linearSearch(arr + 1, size - 1, k);
        return ans;
    }
}

int main()
{
    int arr[] = {3, 5, 6, 8, 9, 12, 15, 19};
    int size = *(&arr + 1) - arr;
    int k = 6555;

    bool ans = linearSearch(arr, size, k);

    if (ans)
    {
        cout << "Available" << endl;
    }
    else
    {
        cout << "Unavailable" << endl;
    }
}