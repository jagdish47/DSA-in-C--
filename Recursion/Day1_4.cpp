#include<iostream>
using namespace std;

void increasingDecresing(int n){
    if(n == 0){
        return ;
    }

    cout<<n<<" ";
    increasingDecresing(n - 1);
    cout<<n<<" ";
}

int main(){

    int n;

    cout<<" Number : ";
    cin>>n;

    increasingDecresing(n);

    return 0;
}
