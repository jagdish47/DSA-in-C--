#include <iostream>
using namespace std;

void count1sAnd0s(int arr[], int size)
{

    int one = 0;
    int zero = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    cout << "1 : " << one << endl;
    cout << "0 : " << zero << endl;
}

int main()
{

    int arr[] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 1};
    int size = 10;

    count1sAnd0s(arr, size);

    return 0;
}