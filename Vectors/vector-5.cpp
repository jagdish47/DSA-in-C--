#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 3, 4, 6, 8};
    int arr2[] = {3, 3, 4, 9, 10};

    int size1 = 6;
    int size2 = 4;

    vector<int> inter;

    for (int i = 0; i < size1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size2; j++)
        {

            if (arr1[i] == arr2[j])
            {
                // arr2[j] = -1; this is another way if we not use break, we mark value if found than will not check again
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            inter.push_back(arr1[i]);
        }
    }

    for (int i = 0; i < inter.size(); i++)
    {
        cout << inter[i] << " ";
    }

    return 0;
}