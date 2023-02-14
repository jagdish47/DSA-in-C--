#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{

    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {3, 4, 5, 6, 7};

    for (int i = 0; i < one.size(); i++)
    {

        for (int j = 0; j < two.size(); j++)
        {

            if (one[i] == two[j])
            {
                two[j] = INT_MIN;
            }
        }
    }

    vector<int> uni;

    for (int i = 0; i < one.size(); i++)
    {

        if (one[i] != INT_MIN)
        {
            uni.push_back(one[i]);
        }
    }

    for (int i = 0; i < two.size(); i++)
    {
        if (two[i] != INT_MIN)
        {
            uni.push_back(two[i]);
        }
    }

    for (auto ele : uni)
    {
        cout << ele << " ";
    }
    return 0;
}