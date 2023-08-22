#include <bits/stdc++.h>
using namespace std;

bool isArithmetic(vector<int> &temp)
{

    if (temp.size() == 2)
    {
        return true;
    }

    int commonDiff = temp[1] - temp[0];

    for (int i = 2; i < temp.size(); i++)
    {

        if (temp[i] - temp[i - 1] != commonDiff)
        {
            return false;
        }
    }
    return true;
}

vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
{
    vector<bool> answer;

    for (int i = 0; i < l.size(); i++)
    {

        int s = l[i];
        int e = r[i];

        vector<int> temp;

        for (int i = s; i <= e; i++)
        {
            temp.push_back(nums[i]);
        }

        sort(temp.begin(), temp.end());

        if (isArithmetic(temp))
        {
            answer.push_back(true);
        }
        else
        {
            answer.push_back(false);
        }
    }
    return answer;
}

int main()
{

    vector<int> nums = {4, 6, 5, 9, 3, 7};
    vector<int> l = {0, 0, 2};
    vector<int> r = {2, 3, 5};

    vector<bool> answer = checkArithmeticSubarrays(nums, l, r);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}