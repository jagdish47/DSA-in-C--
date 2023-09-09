/**
 *
 *Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
 *
 * ////Input
 * Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)
 *
 * ////Output
 * Print the "Multiples" or "No Multiples" corresponding to the read numbers.
 *
 */

#include <iostream>
using namespace std;

int main()
{

    int x;
    int y;

    cin >> x;
    cin >> y;

    if ((x % y == 0) || (y % x == 0))
    {

        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }

    return 0;
}