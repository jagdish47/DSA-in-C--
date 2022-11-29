#include<iostream>
using namespace std;


void firstOccurance(int arr[], int size, int index, int target, int& store){

    
    if(index == size){
        return;
    }

    if(arr[index] == target){
        store = min(store, index);

    }

    
     firstOccurance(arr, size, index+1, target, store);
}




int main(){
    int arr[] = {1, 3, 2, 3, 6, 4, 5};

    int size = *(&arr + 1) - arr;
    int index = 0;
    int targer = 3;

    int store = INT_MAX;


   firstOccurance(arr, size, index, targer, store);

   cout<<store;
}