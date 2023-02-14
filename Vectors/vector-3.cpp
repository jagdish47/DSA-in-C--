#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr)
{
    int find = 0; // if we xor with 0 it won't effect anyone so we took 0

    for (int i = 0; i < arr.size(); i++)
    {

        find = find ^ arr[i];
    }

    return find;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 44, 3, 3, 5, 5};

    cout << findUniqueElement(arr) << endl;

    return 0;
}