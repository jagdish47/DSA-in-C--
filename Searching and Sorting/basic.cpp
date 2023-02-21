#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 7, 8, 66, 77, 88};

    auto ans2 = lower_bound(v.begin(), v.end(), 5);

    cout << "lower bound is :  " << ans2 - v.begin() << endl;

    auto ans3 = upper_bound(v.begin(), v.end(), 5);

    cout << "upper bound is : " << ans3 - v.begin() - 1 << endl;
}