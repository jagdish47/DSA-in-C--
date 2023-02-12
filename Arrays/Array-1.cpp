#include <iostream>
using namespace std;

int main()
{

    int arr[5]; // array Declaration

    int arr2[5] = {5, 6, 4, 3, 2}; // array Initialization
    int arr3[10] = {5, 6, 7, 5, 4, 5, 4};

    int arr4[] = {1, 4, 5};

    char ch[] = {'a', 'b', 'c'};

    int num[] = {43, 5345, 23, 45, 23};
    // cout << num[0] << endl;
    // cout << num[1] << endl;
    // cout << num[2] << endl;
    // cout << num[3] << endl;
    // cout << num[4] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }

    // Taking input in array

    int bag[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "enter : ";
        cin >> bag[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << bag[i] << " ";
    }

    return 0;
}