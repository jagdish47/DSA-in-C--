#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int targetSum = 80;
    vector<int> arr = {10, 20, 30, 40, 50, 60, 10};

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {

            for (int k = j + 1; k < arr.size(); k++)
            {

                for (int l = k + 1; l < arr.size(); l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == targetSum)
                    {
                        cout << i << "  " << j << "  " << k << "  " << l << endl;
                        cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << endl;
                    }
                }
            }
        }
    }

    return 0;
}