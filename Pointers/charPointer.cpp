#include<iostream>
using namespace std;

int main(){
    char ch[6] = "abcde";
    int arr[6] = {1, 2, 3, 4, 5};

    cout<<ch<<endl; //print whole character array
    cout<<arr<<endl; //print address

    char *c = &ch[0];

    cout<<c<<endl;//give whole character array

}