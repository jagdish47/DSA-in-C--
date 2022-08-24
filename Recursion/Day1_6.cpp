#include<iostream>
using namespace std;

void printArray(int arr[], int size, int start){

    if(start == size){
        return;
    }

    cout<<arr[start] << " ";

    printArray(arr, size, start+1);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = *(&arr + 1) - arr;
    int start = 0;

    printArray(arr, size, start);

    return 0;
}