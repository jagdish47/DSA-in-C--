#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str = "Jagdish Kumawat";
    map<string, int> hehe;

    for (int i = 0; i < str.size(); i++)
    {

        hehe[str[i]]++;
    }

    for (auto i : hehe)
    {
        cout << i.first << " " << i.second << endl;
    }
}