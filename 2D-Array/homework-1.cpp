#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {2, 2, 1, 1, 0, 0};

    // Approach-1-------------------------
    // vector<int> one;
    // vector<int> two;
    // vector<int> zero;

    // for (int i = 0; i < arr.size(); i++)
    // {

    //     if (arr[i] == 0)
    //     {
    //         zero.push_back(arr[i]);
    //     }
    //     else if (arr[i] == 1)
    //     {
    //         one.push_back(arr[i]);
    //     }
    //     else
    //     {
    //         two.push_back(arr[i]);
    //     }
    // }

    // for (int i = 0; i < one.size(); i++)
    // {
    //     cout << zero[i] << " ";
    // }
    // for (int i = 0; i < one.size(); i++)
    // {
    //     cout << one[i] << " ";
    // }
    // for (int i = 0; i < one.size(); i++)
    // {
    //     cout << two[i] << " ";
    // }
    // cout << endl;

    // Approach-2-------------------------

    // int zero = 0;
    // int one = 0;
    // int two = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {

    //     if (arr[i] == 0)
    //     {
    //         zero++;
    //     }
    //     else if (arr[i] == 1)
    //     {
    //         one++;
    //     }
    //     else
    //     {
    //         two++;
    //     }
    // }

    // for (int i = 0; i < zero; i++)
    // {
    //     cout << "0 ";
    // }

    // for (int i = 0; i < one; i++)
    // {
    //     cout << "1 ";
    // }
    // for (int i = 0; i < two; i++)
    // {
    //     cout << "2 ";
    // }

    // Approach-3-------------------------Dutch Flag Algorithm

    int high = arr.size() - 1;
    int low = 0;
    int mid = 0;

    while (mid <= high)
    {

        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}