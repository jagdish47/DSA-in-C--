#include <iostream>
#include <math.h>
using namespace std;


int powerRecursion(int n){
    if(n == 0){
        return 1;
    }

    return 2 * powerRecursion(n - 1);
}

int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int ans = powerRecursion(n);
    cout<<ans;

    return 0;
}