#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> one = {2, 3, 4, 5, 6};
    vector<int> two = {2, 4, 5, 6, 4};
    int pairSum = 10;

    for (int i = 0; i < one.size(); i++)
    {

        for (int j = 0; j < two.size(); j++)
        {

            if (one[i] + two[j] == pairSum)
            {
                cout << i << " " << j << endl;
            }
        }
        // cout << endl;
    }

    return 0;
}