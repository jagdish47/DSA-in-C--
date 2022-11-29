#include<iostream>
using namespace std;

int main(){

    int arr[10] = {100, 200, 300, 400};
    // cout<<sizeof(arr)<<endl;//40

    // cout<<sizeof(*arr)<<endl;//4
    // cout<<sizeof(&arr)<<endl;//8



    // int *ptr = &arr[0];
    // cout<<arr[0]<<endl;
    // cout<<*ptr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // return 0;

    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    int *ptr = &arr[0];

    cout<<ptr<<endl; //inside box
    cout<<*&ptr<<endl; //inside box

    cout<<&ptr<<endl; //box itself address
}