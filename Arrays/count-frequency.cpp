#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {34, 4, 3, 2, 5, 3, 23, 34, 2, 23, 3, 5, 2, 3};

    for (int i = 0; i < vec.size(); i++)
    {
        int count = 0;

        for (int j = i; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                count++;
            }
        }

        cout << vec[i] << " " << count << endl;
    }

    return 0;
}
