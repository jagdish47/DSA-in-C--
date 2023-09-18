#include <bits/stdc++.h>
using namespace std;

int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{

    int start = 0;
    int end = (N * M) - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        int rowIndex = mid / M;
        int colIndex = mid % M;

        if (mat[rowIndex][colIndex] == X)
        {
            return 1;
        }
        else if (mat[rowIndex][colIndex] < X)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int X = 0;
    int N = 5;
    int M = 4;

    cout << matSearch(mat, N, M, X) << endl;

    return 0;
}