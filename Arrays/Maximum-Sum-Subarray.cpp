#include <bits/stdc++.h>
using namespace std;

// int main()
// {

//     vector<int> vec = {2, 1, -3, 4, 2, -5};

//     for (int i = 0; i < vec.size(); i++)
//     {

//         vector<int> temp;

//         for (int j = i; j < vec.size(); j++)
//         {

//             temp.push_back(vec[j]);
//             for (int k = 0; k < temp.size(); k++)
//             {
//                 cout << temp[k] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }

int main()
{

    vector<int> arr = {2, -4, 1, 4, -5};

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(currSum, maxSum);
    }

    cout << "Maxi : " << maxSum << endl;

    return 0;
}