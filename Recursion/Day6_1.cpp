#include<iostream>
using namespace std;

// void divideAndConquer(int arr[], int size){
//     if(size < 1){
//         return;
//     }

//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     divideAndConquer(arr, size/2);
// }


void divedeAndConquer2(int *arr, int start, int end){
    if(start >= end){
        cout<<arr[start];
        return;
    }

    for(int i = start; i <= end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int mid = start + end / 2;
    divedeAndConquer2(arr, start, mid);
}

int main(){

    int arr[] = {3, 4, 2, 5, 1, 2};
    int size = *(&arr + 1) - arr;
    int start = 0;

    // divideAndConquer(arr, size);
    divedeAndConquer2(arr,start,size);

    return 0;
}