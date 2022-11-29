#include<iostream>
using namespace std;

int main(){

    int arr[] = {10, 4, 3, 6, 8, 9};
    int s = 6;

    for(int i = 0; i < s; i++){
        if(arr[i] == 6){
            cout<<"=="<<endl;
        }

        cout<<arr[i]<<endl;
    }

    return 0;
}