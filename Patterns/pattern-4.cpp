#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cout << "Enter row and col :" << endl;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}