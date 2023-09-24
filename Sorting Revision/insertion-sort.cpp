#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{10, 4, 3, 6, 3, 4, 2};

    for (int i = 1; i < arr.size(); i++)
    {
        // fetch data
        int val = arr[i];

        int j;
        for (j = i - 1; j >= 0; j--)
        {

            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = val;
    }

    for (int k = 0; k < arr.size(); k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}