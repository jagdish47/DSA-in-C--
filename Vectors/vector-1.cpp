#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> dec;       // declare a vector
    // vector<int> vec(5, 0); // Initialization [0, 0, 0, 0, 0]

    vector<int> v = {10, 20, 30, 40};

    // vector method

    cout << v.empty() << endl;

    v.push_back(10);
    v.push_back(20);
    cout << v.size() << endl; // 6

    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << v.size() << endl; // 3

    cout << v.front() << endl;
    cout << v.back() << endl;

    cout << "accessing vector values : " << endl;
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;

    cout << "using for loop" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}