#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int s = *(&arr + 1) - arr;

    map<int, int> freq;

    int a = 0;

    for (int i = 0; i < s; i++)
    {
        freq[arr[i]]++;
        }

    for (auto i : freq)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << freq.size();

    return 0;
}