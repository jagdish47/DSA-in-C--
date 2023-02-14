#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0};

    vector<int> sor;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            sor.push_back(arr[i]);
        }
    }

    for (int i = sor.size(); i < arr.size(); i++)
    {

        sor.push_back(0);
    }

    for (auto ele : sor)
    {
        cout << ele << " ";
    }

    return 0;
}