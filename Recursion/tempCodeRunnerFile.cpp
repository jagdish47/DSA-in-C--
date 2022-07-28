#include <iostream>
using namespace std;



void recursionCounting(int n){
    if(n == 0){
        return;
    }

    return recursionCounting(n-1);
    cout<<n<<endl;

}
int main(){
    int n;

    cout<<"number : ";
    cin>>n;

    recursionCounting(n);
    return 0;
}