#include <iostream>
using namespace std;

int isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return n;
}

int main()
{

    int n = 100;

    for (int i = 1; i <= n; i++)
    {
        cout << isPrime(i) << " ";
    }

    return 0;
}