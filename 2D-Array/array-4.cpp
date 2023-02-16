#include <iostream>
using namespace std;

bool searchInArray(int arr[][3], int size, int key)
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {9, 9, 9}};

    int key = 5;

    if (searchInArray(arr, 3, key))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    return 0;
}