#include <iostream>
using namespace std;

void subsequence(string str, string empty, int start)
{

    if (str.size() == start)
    {
        cout << empty << endl;

        return;
    }

    subsequence(str, empty + str[start], start + 1);

    subsequence(str, empty, start + 1);
}

int main()
{

    string str = "abc";
    string empty = "";
    int start = 0;

    subsequence(str, empty, start);

    return 0;
}