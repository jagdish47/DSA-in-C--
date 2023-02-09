#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter row : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {

        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }

        for (int j = 0; j < row - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}