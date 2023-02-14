#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "enter size of array one : ";
    cin >> n;

    vector<int> arrOne(n);

    for (int i = 0; i < arrOne.size(); i++)
    {
        cout << "Enter ele at : " << i << " ";
        cin >> arrOne[i];
    }

    int m;
    cout << "enter size of array two : ";
    cin >> m;

    vector<int> arrTwo(m);

    for (int i = 0; i < arrTwo.size(); i++)
    {
        cout << "Enter ele at : " << i << " ";
        cin >> arrTwo[i];
    }

    vector<int> un;

    for (int i = 0; i < arrOne.size(); i++)
    {
        un.push_back(arrOne[i]);
    }

    for (int i = 0; i < arrTwo.size(); i++)
    {
        un.push_back(arrTwo[i]);
    }

    for (int i = 0; i < un.size(); i++)
    {
        cout << un[i] << " ";
    }

    return 0;
}