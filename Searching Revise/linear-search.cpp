#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> vec, int target)
{

    for (int i = 0; i < vec.size(); i++)
    {

        if (vec[i] == target)
        {
            return true;
        }
    }

    return false;
}

bool recursiveLinearSearch(vector<int> vec, int target, int i = 0)
{

    if (vec[i] == target)
        return true;

    if (i == vec.size())
        return false;

    return recursiveLinearSearch(vec, target, i + 1);
}

int main()
{

    vector<int> vec{9, 6, 4, 9, 2, 9, 4, 7, 4, 7};
    int target = 9;

    // bool ans = linearSearch(vec, target);
    bool ans = recursiveLinearSearch(vec, target);
    cout << endl;
    cout << "is Found : " << ans << endl;
    cout << endl;

    return 0;
}