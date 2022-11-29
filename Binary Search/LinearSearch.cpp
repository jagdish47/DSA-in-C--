#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
 

int main()

{
    int arr[] = {3, 7, 0, -2, 5, 9};
    int size = *(&arr + 1) - arr;
    int key = 99;

    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout<<"Present";
    }else{
        cout<<"not Present";
    }
}