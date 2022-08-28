#include<iostream>
using namespace std;

// void reverseArray(int arr[], int size, int index){

//     if(size == index){
//         return;
//     }

//     reverseArray(arr, size, index+1);

//     cout<<arr[index] << " ";
// }

// int main(){
//     int arr[] = {4, 5, 6, 3, 2};

//     int index = 0;
//     int size = *(&arr + 1) - arr;

//     reverseArray(arr, size, index);


// }



void reverseArray1(int arr[], int size, int index){

    if(size < 0){
        return;
    }

    cout<<arr[size] << " ";

    reverseArray1(arr, size-1, index);
}


int main(){
    int arr[] = {4, 5, 6, 3, 2};

    int index = 0;
    int size = *(&arr + 1) - arr;


    reverseArray1(arr, size-1, index);


}