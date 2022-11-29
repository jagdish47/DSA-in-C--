#include<iostream>
using namespace std;

// void printArray(int arr[], int size, int index){

//     if(index == size){
//         return;
//     }

//     cout<<arr[index] << " ";

//     printArray(arr, size, index+1);

// }

// int main(){
//     int arr[] = {1, 3, 5, 7, 9};

//     int size = *(&arr + 1) - arr;

//     int index = 0;


//     printArray(arr, size, index);
// }




void printArray(int arr[], int size){

    if(size == 0){
        return;
    }

    cout<<arr[0]<<" ";

    printArray(arr+1, size-1);


}



int main(){
    int arr[] = {1, 3, 5, 7, 9};

    int size = *(&arr + 1) - arr;


    printArray(arr, size);
}