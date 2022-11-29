#include<iostream>
using namespace std;


int main(){

    // int num = 1000;
    // int *ptr = &num;
    //copying Pointer
    // int *ptrCopy = ptr;

    // cout<<"value ptr "<<*ptr <<" address "<<ptr<<endl;
    // cout<<"value Copyptr "<<*ptrCopy<<" address "<<ptrCopy<<endl;



    // Important Concept
    int love = 10;
    int *p = &love;

    cout<< ++(*p) <<endl; //11
    cout<< (*p)++ <<endl; //11
    cout<<*p<<endl; //12

    return 0;
}