#include <iostream>
using namespace std;

int getEven(int n)
{

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{

    int n = 5;

    int ans = getEven(n);
    cout << ans << endl;

    return 0;
}