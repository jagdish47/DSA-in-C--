#include <bits/stdc++.h>
using namespace std;

// void mergeTwoString(string str1, string str2)
// {

//     string temp = "";

//     int one = 0;
//     int two = 0;

//     for (int i = 0; i < str1.size() + str2.size(); i++)
//     {

//         if (i % 2 == 0 && str1.length() >= one)
//         {
//             temp += str1[one];
//             one++;
//         }
//         else if (str2.length() >= two)
//         {

//             temp += str2[two];
//             two++;
//         }
//     }

//     while (one < str1.length())
//     {
//         temp += str1[one];
//         one++;
//     }

//     while (two < str2.length())
//     {
//         temp += str2[two];
//         two++;
//     }

//     cout << temp << endl;
// }

void merge(string S1, string S2)
{

    string s;

    int n = S1.length();
    int m = S2.length();

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        s += S1[i++];
        s += S2[j++];
    }

    while (i != n)
    {
        s += S1[i++];
    }

    while (j != m)
    {
        s += S2[j++];
    }

    cout << s << endl;
}

int main()
{

    string str1 = "Hello";
    string str2 = "Bye";

    merge(str1, str2);

    return 0;
}