#include <iostream>
using namespace std;

void getEven(int n)
{

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even : " << i << " " << endl;
            ;
        }
    }
}

int main()
{

    int n = 50;

    getEven(n);

    return 0;
}