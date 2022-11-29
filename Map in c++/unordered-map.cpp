#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // creating hashmap
    unordered_map<string, int> names;

    // inserting way - 1
    names.insert(pair<string, int>("Jagdish", 1));

    // inserting way - 2
    pair<string, int> p1 = make_pair("Anshu", 2);
    names.insert(p1);

    // inserting way - 3
    pair<string, int> p2("Yuvraj", 3);
    names.insert(p2);

    // inserting way - 4
    names["Daya"] = 4;

    // searching
    cout << names["Jagdish"] << endl;
    cout << names["Yuvraj"] << endl;

    // size
    cout << names.size() << endl;

    // available or not
    cout << names.count("Daya") << endl;

    return 0;
}