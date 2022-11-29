#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){

    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remainingPart = sumOfArray(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;

}

int main(){
    int arr[] = {2, 4, 5, 6, 3, 1};
    int size = *(&arr + 1) - arr;


    int ans = sumOfArray(arr, size);
    
    cout<<ans;
}