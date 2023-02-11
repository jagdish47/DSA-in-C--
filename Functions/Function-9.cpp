#include <iostream>
using namespace std;

string isEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

int main()
{

    int n = 50;

    cout << isEvenOdd(n) << endl;

    return 0;
}