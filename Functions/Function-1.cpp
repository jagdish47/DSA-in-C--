#include <iostream>
using namespace std;

void printName(int n, string name)
{
    for (int i = 0; i < n; i++)
    {
        cout << name << endl;
    }
}

int main()
{
    printName(5, "Jagdish Kumawat");
    return 0;
}