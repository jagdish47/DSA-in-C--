#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    if(n == 0 || n == 1){
        return;
    }

    for(int i = 0; i < n; i++){

        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}





int main(){
    int arr[] = {5, 6, 4, 3, 6, 44, 3, 22, 1};
    int size = *(&arr + 1) - arr;

    bubbleSort(arr, size);


    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}