#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    // cout << "enter number of rows : ";
    // cin >> n;

    // print first pyramid
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        for (int l = 0; l < i * 2; l++)
        {
            cout << "  ";
        }

        for (int p = 0; p < n - i; p++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // print second pyramid
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "  ";
        }

        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}