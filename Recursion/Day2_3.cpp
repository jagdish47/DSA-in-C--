#include<iostream>
using namespace std;

int findMaximum(int arr[], int size, int index, int &maxi){


    if(index == size){
        return maxi;
    }

    if(maxi < arr[index]){
        maxi = arr[index];
    }

    findMaximum(arr, size, index+1, maxi);

    // return maxi;  //You can return from here also

}

int main(){

    int arr[] = {7, 2, 15, 9, 21, 18};
    int size = *(&arr + 1) - arr;
    int index = 0;
    int maxi = arr[0];

    int ans = findMaximum(arr, size, index, maxi);

    cout<<ans;

 
    return 0;    
}