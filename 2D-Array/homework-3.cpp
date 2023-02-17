#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

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

    vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 10, 20};

    int max = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    vector<int> vec(max, 0);

    for (int i = 0; i < arr.size(); i++)
    {
        vec[arr[i]]++;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}