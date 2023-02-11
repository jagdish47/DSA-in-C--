#include <iostream>
using namespace std;

char getResult(int marks)
{
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 75)
    {
        return 'C';
    }
    else if (marks >= 40)
    {
        return 'D';
    }
    return 'F';
}

int main()
{

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    cout << getResult(marks) << endl;

    return 0;
}