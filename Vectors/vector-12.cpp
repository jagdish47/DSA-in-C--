#include <iostream>
#include <vector>
using namespace std;

// void swapXOR(int x, int y)
// {
//     x = x ^ y;
//     y = x ^ y;
//     x = x ^ y;
// }

int main()
{

    vector<int> arr = {0, 1, 1, 0, 1, 0, 0, 1, 0, 0};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (arr[end] == 0 && arr[start] == 1)
        {
            swap(arr[start], arr[end]);
        }

        if (arr[start] == 0)
        {
            start++;
        }

        if (arr[end] == 1)
        {
            end--;
        }
    }

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}