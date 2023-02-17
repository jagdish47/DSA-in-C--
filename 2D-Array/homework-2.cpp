#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {5, 3, -4, 3, -1, 5, -5, 1, 2, -1};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {

        if (arr[end] < 0)
        {
            end--;
        }

        else if (arr[start] > 0)
        {
            start++;
        }

        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}