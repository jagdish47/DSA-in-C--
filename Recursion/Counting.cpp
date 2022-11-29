#include <iostream>
using namespace std;



void recursionCounting(int n){
    if(n == 0){
        return;
    }

    cout<<n<<endl;  //Print in Descrising Order

    recursionCounting(n-1);
    cout<<n<<endl;  //Print in Increasing Order


}


int main(){
    int n;

    cout<<"number : ";
    cin>>n;

    recursionCounting(n);
    return 0;
}
