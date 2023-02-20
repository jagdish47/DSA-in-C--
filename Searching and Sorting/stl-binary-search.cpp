#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    // STL Vector

    vector<int> v{1, 2, 3, 4, 5, 56, 77, 88};

    if (binary_search(v.begin(), v.end(), 7))
    {
        cout << "Found it" << endl;
    }
    else
    {
        cout << "didn't Found" << endl;
    }

    // STL Array

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if (binary_search(arr, arr + size, 5))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "not Found" << endl;
    }

    return 0;
}