#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> vec = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8, 9}};

    for (int i = 0; i < vec.size(); i++) // each row
    {

        for (int j = 0; j < vec[i].size(); j++) // each column
        {

            // cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    // -------------------------------------------------------------------------

    vector<vector<int>> arr(5, vector<int>(5, -8)); // Inititalizing vector with 5 row and 5 columns initial value of all is -8

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}