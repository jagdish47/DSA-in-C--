#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl; //print actual value 5
    cout<<p<<endl; //print address of inside box
}
int main(){

    int value = 5;
    int *ptr = &value;
 
    print(ptr);

    return 0;
}