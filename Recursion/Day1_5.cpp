#include<iostream>
using namespace std;

void increasingDecresing(int n, int a){
   
    if(a > n){
        return ;
    }

    cout<<a<<" ";
    increasingDecresing(n, a+1);
    cout<<a<<" ";
}

int main(){

    int n;
     int a = 1;

    cout<<" Number : ";
    cin>>n;

    increasingDecresing(n ,a);

    return 0;
}