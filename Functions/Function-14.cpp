#include <iostream>
#include <math.h>
using namespace std;

int convertDecimalToBinary(int n)
{

    int binaryDigit = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n % 2;
        binaryDigit = bit * pow(10, i) + binaryDigit;
        n = n / 2;
        i++;
    }

    return binaryDigit;
}

int convertDecimalToBinary2(int n)
{

    int binaryDigit = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = (n & 1);
        binaryDigit = bit * pow(10, i++) + binaryDigit;
        n = n >> 1;
    }

    return binaryDigit;
}

int main()
{

    int num = 10;

    int ans = convertDecimalToBinary2(num);
    cout << ans << endl;
}