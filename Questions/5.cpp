#include<iostream>
using namespace std;

int main(){
   int arr[]= {5, 4, 3, 2, 1};
    int size = 5;
   for(int i = 0; i < size-2; i++){
    arr[i] = arr[i] - arr[i+1];
   }

   for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
   }

}