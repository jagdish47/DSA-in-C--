#include <iostream>
using namespace std;

int main()
{

    int n = 10;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {

            if (j == 0)
            {
                cout << j + 1 << " ";
            }
            else if (j == i)
            {
                cout << i + 1 << " ";
            }
            else if (i == n - 1)
            {
                cout << j + 1 << " ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}