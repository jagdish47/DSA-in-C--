#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "enter number of row : " << endl;
    cin >> row;

    for (int i = row; i > 0; i--)
    {

        for (int j = 0; i > j; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}