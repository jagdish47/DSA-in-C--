#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;

    cout << "enter (a,b,c) : " << endl;
    cin >> a >> b >> c;

    cout << max({a, b, c}) << endl;
    cout << min({a, b, c}) << endl;

    int maxi = max(a, max(b, c));
    int mini = min(a, min(b, c));

    cout << "maximum : " << maxi << endl;
    cout << "maximum : " << mini << endl;

    return 0;
}