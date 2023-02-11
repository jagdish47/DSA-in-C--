#include <iostream>
using namespace std;

void countNumber(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    countNumber(n);

    return 0;
}