#include <bits/stdc++.h>
using namespace std;

// int findOddOccuringElementUsingMAP(vector<int> vec)
// {
//     unordered_map<int, int> umap;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         umap[vec[i]]++;
//     }
//     for (auto ele : umap)
//     {
//         int isOdd = ele.second;
//         if (isOdd % 2 != 0)
//         {
//             return ele.first;
//         }
//     }
//     return -1;
// }

int findOddOccuringElement(vector<int> &vec)
{
}

int main()
{

    vector<int> vec{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};

    int ans = findOddOccuringElement(vec);
    cout << ans << endl;

    return 0;
}