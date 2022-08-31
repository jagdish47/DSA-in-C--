#include<iostream>
using namespace std;


int main(){
    int num = 5;  //Created block in memory -> map to address
    //cout<< num <<endl;  //5
    //cout<< &num <<endl; //& address of Operator -> Hexadecimal -> 0x3ff9bff7b4
    

    int *ptr = &num;

    cout<<"Actual Value of num "<<*ptr<<endl;
    cout<<"Actual Value of num "<<num<<endl;

    // These all are give address of num all these give same address
    cout<<"Give the Address "<<&*ptr<<endl;
    cout<<"Give the Address "<<ptr<<endl;
    cout<<"Give the Address "<<&num<<endl;

    // this will give actual pointer address
    cout<<"Give the Address "<<&ptr<<endl;


    cout<<"size of Integer "<<sizeof(num)<<endl;
    cout<<"size of Pointer "<<sizeof(*ptr)<<endl;

    cout<<"size of address "<<sizeof(&num)<<endl;
    cout<<"size of address "<<sizeof(&*ptr)<<endl;
    cout<<"size of address "<<sizeof(ptr)<<endl;

    cout<<"size of address "<<sizeof(&ptr)<<endl;


    return 0;
}