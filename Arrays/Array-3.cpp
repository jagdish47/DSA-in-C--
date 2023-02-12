#include <iostream>
using namespace std;

int main()
{

    int arr[] = {34, 34, 34, 34, 3, 43, 32};

    for (int i = 0; i < 7; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}