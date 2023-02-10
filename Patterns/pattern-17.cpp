#include <iostream>
using namespace std;

int main()
{

    int n = 6;
    int ch = 65;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + i + 1; j++)
        {

            cout << (char)(ch + i) << " ";
        }
        cout << endl;
    }

    return 0;
}