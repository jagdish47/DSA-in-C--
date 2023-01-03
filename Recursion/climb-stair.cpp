#include <iostream>
using namespace std;

int wayClimb(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return wayClimb(n - 1) + wayClimb(n - 2);
}

int main()
{
    int n = 4;
    cout << wayClimb(n) << endl;
    return 0;
}