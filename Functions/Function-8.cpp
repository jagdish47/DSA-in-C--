#include <iostream>
using namespace std;

float areaOfCircle(int area)
{
    return 2 * 3.14 * area;
}

int main()
{

    int area = 5;

    cout << areaOfCircle(area) << endl;

    return 0;
}