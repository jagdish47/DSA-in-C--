#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 34, 10, 20, 34, 1};

    vector<int> copy(100, 0);

    // find unique element

    for (int i = 0; i < v.size(); i++)
    {

        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {

            if (v[i] == v[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << v[i] << endl;
            break;
        }
    }

    return 0;
}