// Given a Number N print the XOR of all numbers between (1-N);

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    if(n%4 == 0){
        cout<<n;
    }
    else if(n%4 == 1){
        cout<<1;
    }
    else if(n%4 == 2){
        cout<<n+1;
    }
    else if(n % 3){
        cout<<0;
    }
}