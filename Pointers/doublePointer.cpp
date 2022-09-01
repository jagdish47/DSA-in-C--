#include<iostream>
using namespace std;

int main(){
    // (Single Pointer Revice)
    // int num = 10;
    // int *ptr = &num;
    
    // cout<<&num<<endl;
    // cout<<ptr<<endl;

    // cout<<num<<endl;
    // cout<<*ptr<<endl;



    int num = 100;
    int *ptr = &num;

    int **ptr2 = &ptr;

    cout<<&ptr<<endl; //address of pointer ptr
    cout<<ptr2<<endl;//address of pointer ptr is actual value of ptr2

    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    cout<<*ptr2<<endl;
    cout<<ptr<<endl;

    cout<<"----------------------------------------------------------------------"<<endl;

    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;
}