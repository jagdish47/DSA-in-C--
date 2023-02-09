#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "enter row : " << endl;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        // print spaces

        for (int s = 0; s < row - i - 1; s++)
        {
            cout << " ";
        }

        // print *
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
