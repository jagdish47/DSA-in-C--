#include<iostream>
using namespace std;

void justUnderstand(int *arr, int size){

    cout<<&(arr[0]) <<endl;
    cout<<arr + 1 <<endl;
    cout<<arr + 2 <<endl;
    cout<<arr + 3 <<endl;
    cout<<arr + 4 <<endl;
}

int main(){
    int arr[] = {2, 4, 5, 7, 88};
    int size = *(&arr + 1) - arr;


    justUnderstand(arr, size);
}
