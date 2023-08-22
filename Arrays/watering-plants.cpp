#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 3};
    int n = 4;
    int capacity = 5;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (capacity >= arr[i])
        {
            count++;
            capacity -= arr[i];
        }
        else
        {
            capacity = 5;
            capacity -= arr[i];
            count += (2 * i + 1);
        }
    }

    cout << "answer is : " << count << endl;

    return 0;
}
