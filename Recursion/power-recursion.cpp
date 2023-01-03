#include <iostream>
using namespace std;

int poww(int p, int q)
{
    if (q == 0)
    {
        return 1;
    }

    return p * poww(p, q - 1);
}

int main()
{
    int p = 2;
    int q = 5;

    cout << poww(p, q) << endl;

    return 0;
}