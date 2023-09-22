#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 5, 0};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
