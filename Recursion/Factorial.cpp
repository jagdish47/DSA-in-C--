#include <iostream>
#include <stdio.h>
using namespace std;

int factorialRecursion(int n)
{
    //   Base case or (Base Condition)
    if (n == 0)
    {
        return 1;
    }

    return n * factorialRecursion(n - 1);
}

int main()
{

    int n;
    cin >> n;

    int ans = factorialRecursion(n);
    cout << ans << endl;
}