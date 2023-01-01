#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 1, 2, 3, 3, 2, 5, 6};

    int max = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }

    int arr[max + 1] = {};

    for (int i = 0; i < vec.size(); i++)
    {
        if (arr[vec[i]] == 0)
        {
            arr[vec[i]] = 1;
        }
        else
        {
            arr[vec[i]] = arr[vec[i]] = arr[vec[i]] + 1;
        }
    }

    for (int i = 0; i <= max; i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
}
