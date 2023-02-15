#include <iostream>
using namespace std;

int main()
{

    // int arr[10][10]; // declaration of array

    int arr[3][3] = {{1, 3, 4},
                     {4, 5, 10},
                     {7, 8, 9}}; // Initialization

    cout << "Printing row wise" << endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing column wise" << endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}