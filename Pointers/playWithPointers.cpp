#include<iostream>
using namespace std;

int main(){
    // pointer to int is created, and pointing to some garbage address.
    // don't use this it's bad practice
    // int *ptr;

    // use this if you want to
    // int *ptr = 0; //null pointer pointing to nothing



    // int a = 5;
    // int *ptr1 = &a;

    // int *ptr2 = 0;
    // ptr2 = &a;

    // cout<<"Address of ptr1 is "<<ptr1<<" Value of *ptr1 is "<<*ptr1<<endl;

    // cout<<"Address of ptr2 is "<<ptr2<<" Value of *ptr2 is "<<*ptr2<<endl;



    // (1)
    // int i = 10;
    // int j = i;

    // i = 20;

    // cout<<"The value of i "<<i<<endl;
    // cout<<"The value of j "<<j<<endl;

    // (2)
    // int x = 10;
    // int *ptr1 = &x;
    // x = 100;
    // cout<<*ptr1<<endl;
    // cout<<x<<endl;
    
    // (3)
    // *ptr1 = 200;
    // cout<<*ptr1<<endl;
    // cout<<x<<endl;


    return 0;
}