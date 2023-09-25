#include <bits/stdc++.h>
using namespace std;

// Brute Force Technique
//  int findPairs(vector<int> &nums, int k)
//  {
//      int count = 0;
//      for (int i = 0; i < nums.size() - 1; i++)
//      {
//          for (int j = i + 1; j < nums.size(); j++)
//          {
//              int value = abs(nums[i] - nums[j]);
//              if (value == k)
//              {
//                  count++;
//              }
//          }
//      }
//      return count;
//  }

// Two Pointer Techniquer
// int findPairs(vector<int> &nums, int k)
// {
//     sort(nums.begin(), nums.end());
//     set<pair<int, int>> ans;
//     int i = 0;
//     int j = 1;
//     int count = 0;
//     while (j < nums.size())
//     {
//         int val = abs(nums[i] - nums[j]);
//         if (val == k)
//         {
//             ans.insert({nums[i], nums[j]});
//             i++;
//             j++;
//         }
//         else if (val > k)
//         {
//             i++;
//         }
//         else if (val < k)
//         {
//             j++;
//         }
//         if (i == j)
//         {
//             j++;
//         }
//     }
//     return ans.size();
// }

int bs(vector<int> &nums, int start, int x)
{

    int end = nums.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (nums[mid] == x)
        {
            return mid;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int findPairs(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {

        if (bs(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}

int main()
{

    vector<int> nums{3, 1, 4, 1, 5};

    int k = 2;

    int ans = findPairs(nums, k);

    cout << ans << endl;

    return 0;
}