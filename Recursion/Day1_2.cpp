#include <iostream>
using namespace std;

void decreasing(int n){
    if(n == 0){
        return;
    }

    for(int i = 1; i <= 5; i++){
        cout<<"# ";
    }
    cout<<n <<" "<< endl;

    decreasing(n - 1);
}




int main()
{
    int n;
    cout << "number : ";
    cin>>n;

    decreasing(n);
    return 0;
}