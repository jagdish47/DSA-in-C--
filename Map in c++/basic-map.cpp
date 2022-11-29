#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, int> first;

    // Inserting element in random order
    first.insert(pair<int, int>(1, 56));
    first.insert(pair<int, int>(2, 35));
    first.insert(pair<int, int>(2, 35));
    first.insert(pair<int, int>(3, 543));

    // another way to insert
    first[4] = 66;

    map<int, int>::iterator itr;
    for (itr = first.begin(); itr != first.end(); ++itr)
    {
        cout << itr->first << " : " << itr->second << endl;
    }
    cout << endl;

    map<int, int> second(first.begin(), first.end());

    map<int, int>::iterator lt;

    for (lt = second.begin(); lt != second.end(); lt++)
    {
        cout << lt->first << " : " << lt->second << endl;
    }

    return 0;
}