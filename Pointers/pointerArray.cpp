#include<iostream>
using namespace std;


int main(){

    int arr[10] = {100, 200, 300, 400, 500};
    cout<<"address of first memory block "<<arr<<endl;
    cout<<"address of first memory block "<<&arr[0]<<endl;

    cout<<endl;
    cout<<"address of second memory block "<<arr+1<<endl;
    cout<<"address of second memory block "<<&arr[1]<<endl;


    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*arr+2<<endl;
    cout<<*arr+3<<endl;


    cout<<*(arr + 1)<<endl;
    cout<<*(arr + 2)<<endl;

    for(int i = 0; i < 10; i++){
        cout<<*(arr + i) <<endl; //this will print array 
        // cout<<*arr + i<<endl; //Just Increse one from first 
    }


    for(int i = 0; i < 5; i++){
        cout<<arr[i] << " ";
        cout<<*(arr + i)<<" ";

        cout<<i[arr]<<" ";
        cout<<*(i + arr)<<" ";
    }


}