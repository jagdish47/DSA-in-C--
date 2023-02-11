#include <iostream>
using namespace std;

void getAllDigit(int num)
{

    for (int i = num; i > 0; i = i / 10)
    {
        cout << i % 10 << endl;
    }
}

int main()
{

    int num = 12345;

    getAllDigit(num);

    return 0;
}