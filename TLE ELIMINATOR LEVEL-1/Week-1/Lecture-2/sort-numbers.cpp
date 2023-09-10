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

    int x = a, y = b, z = c;

    if (a > b)
        swap(a, b);

    if (b > c)
    {
        swap(c, b);

        if (a > b)
            swap(a, b);
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}