#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "ab-cd";

    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {

        if (str[start] >= 97 && str[start] <= 122 || str[start] >= 65 && str[start] <= 90)
        {

            if (str[end] >= 97 && str[end] <= 122 || str[end] >= 65 && str[end] <= 90)
            {
                swap(str[start], str[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
        else
        {
            start++;
        }
    }

    cout << str << endl;

    return 0;
}