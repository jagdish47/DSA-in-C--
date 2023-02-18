#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> duplicate(vector<int> arr, int n)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
        {
            ans.push_back(i);
        }
    }

    if (ans.size() == 0)
    {
        return {-1}; // this is way to return vector
    }

    return ans;
}

int main()
{

    // vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 10, 20};

    // APPROACH-1----------------------------------------------------------

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int count = 0;
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {

    //         if (arr[i] == arr[j])
    //         {

    //             count++;
    //             break;
    //         }
    //     }

    //     if (count > 0)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // APPROACH - 2 -------------------------------------------------------------

    // vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 10, 20};

    // int max = INT_MIN;

    // for (int i = 0; i < arr.size(); i++)
    // {

    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }

    // vector<int> vec(max, 0);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     vec[arr[i]]++;
    // }

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == 1)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // APPROACH-3=================================================================

    vector<int> arr = {1, 2, 3, 1, 2};

    vector<int> ve = duplicate(arr, arr.size());

    for (int i = 0; i < ve.size(); i++)
    {
        cout << ve[i] << " ";
    }
}
