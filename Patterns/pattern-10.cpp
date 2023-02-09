#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int flat = 0;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << count + k << " ";
        }
        flat = count;
        flat++;
        for (int l = 1; l < i; l++)
        {
            cout << flat - l << " ";
        }
        count++;
        cout << endl;
    }

    return 0;
}