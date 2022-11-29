#include<iostream>
using namespace std;

//Search till Last
void lastOccurance(int arr[], int size, int index, int target, int& ans){

    if(index == size){
        return;
    }

    if(arr[index] == target){
        ans = index;
    }

    lastOccurance(arr, size, index+1, target, ans);

}



// Searching from the Last
int lastOccuranceSFL(int arr[], int index, int size, int target){
    
    if(arr[size] == target){
        return size;
    }

    
    if(size < 0){
        return -1;
    }


    lastOccuranceSFL(arr, index, size-1, target);
}
    


int main(){
    int arr[] = {1, 3, 4, 2, 5, 4, 2, 2};
    int size = *(&arr + 1) - arr;
    int index = 0;
    int target = 4;
    int ans = -1;


    int get = lastOccuranceSFL(arr, index, size-1, target);
    cout<<get;

    // lastOccurance(arr, size, index, target, ans);
    // cout<<ans;
}
