#include <iostream>
using namespace std;

int ignite(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    return ignite(num * num, pow - 1);
}

int main()
{

    int num = 2, pow = 2;
    cout << ignite(num, pow) << endl;
    return 0;
}