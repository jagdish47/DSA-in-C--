#include <iostream>
using namespace std;

int findMaximum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }

    return c;
}

int main()
{

    cout << findMaximum(1999, 230, 34) << endl;

    return 0;
}