#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{6, 5, 4, 3, 2, 1};

    for (int i = 1; i < arr.size(); i++)
    {
        bool swapped = false;

        for (int j = 0; j < arr.size() - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}