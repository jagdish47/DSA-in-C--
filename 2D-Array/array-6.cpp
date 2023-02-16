#include <iostream>
using namespace std;

void transposeOfMatrix(int arr[3][3], int size, int transpose[3][3])
{

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            transpose[j][i] = arr[i][j];
        }
    }
}

int main()
{

    int mat[3][3] = {{2, 4, 6}, {1, 3, 5}, {9, 1, 13}};
    int transpose[3][3];

    transposeOfMatrix(mat, 3, transpose);

    cout << "Transporse of matrix is " << endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}