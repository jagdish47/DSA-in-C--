#include<iostream>
using namespace std;

// bool isSorted(int arr*, int size)  //both are same use any one

bool isSorted(int arr[], int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    else{
        bool ans = isSorted(&arr[0 + 1], size-1);
        return ans;
    }

}


int main(){
    int arr[] = {5, 5, 6};
     int size = *(&arr + 1) - arr;

    bool ans = isSorted(arr, size);

    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }
}