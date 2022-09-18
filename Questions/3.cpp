#include<iostream>
using namespace std;

int main(){
    
    int a = 1;
    cout<<"a "<<a<<endl;

    int b = a++;
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;



    int c = ++a;

    cout<<"b "<<b<<endl;
    cout<<"c "<<c<<endl;

    return 0;
}