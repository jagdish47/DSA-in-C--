/**
 *
 * Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.
 *
 * ////Input
 * Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)
 *
 * ////Output
 * Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
 *
 */

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {

        cout << a;
    }
    if (b > c)
    {
        if (b > a)
        {
            cout << b;
        }
    }
    else
    {
        cout << c;
    }

    return 0;
}