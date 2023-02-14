#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int targetSum = 80;
    vector<int> arr = {10, 20, 30, 40, 50, 60};

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {

            for (int k = j + 1; k < arr.size(); k++)
            {

                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}