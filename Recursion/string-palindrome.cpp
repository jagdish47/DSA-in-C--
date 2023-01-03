#include <iostream>
using namespace std;

bool palindrome(string str, int start, int end)
{
    if (str[start] != str[end])
    {
        return false;
    }

    if (start <= end)
    {
        return true;
    }

    return palindrome(str, start + 1, end - 1);
}

int main()
{

    string str = "aaaa";
    int start = 0;
    int end = str.size() - 1;

    (palindrome(str, start, end)) ? cout << "Yes Palindrome" << endl : cout << "Noo, not Palindrome" << endl;

    return 0;
}