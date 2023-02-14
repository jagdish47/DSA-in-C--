#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int targetSum = 9;
    vector<int> arr = {1, 3, 5, 7, 2, 4, 6};

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {

            if (arr[i] + arr[j] == targetSum)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}