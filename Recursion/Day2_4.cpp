#include<iostream>
using namespace std;

// int firstOccurance(int arr[], int size, int index, int target){
//     if(arr[index] == target){
//         return index;
//     }

//     if(index == size){
//         return -1;
//     }

//     firstOccurance(arr, size, index+1, target);
// }








int firstOccurance(int arr[], int size, int index, int target){

    if(arr[0] == target){
        return index;
    }
    

    if(size == 0){
        return -1;
    }

    firstOccurance(arr+1, size-1, index+1, target);
}









int main(){
    // int arr[] = {1, 3, 2, 3, 6, 4, 5};
    int arr[] = {1, 2, 4, 5, 6, 7, 10};
    int size = *(&arr + 1) - arr;
    int index = 0;
    int targer = 3;

    int ans = firstOccurance(arr, size, index, targer);


    cout<<endl;
    cout<<ans;
}