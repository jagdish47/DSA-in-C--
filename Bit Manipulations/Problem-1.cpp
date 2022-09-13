// Given array you have occure two element twice except one print that non repeating element using bit manipulation

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 1, 2, 5, 6, 5, 7, 7, 6};
    int XOR = 0;
    for (int i = 0; i < 9; i++)
    {
        XOR = XOR ^ arr[i];
    }
    cout << XOR << " ";

    return 0;
}