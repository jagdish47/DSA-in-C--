#include <iostream>
using namespace std;

int findFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{

    int n = 5;

    cout << findFactorial(n) << endl;

    return 0;
}