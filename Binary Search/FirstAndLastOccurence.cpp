#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){

    int start  = 0;
    int end = size - 1;
    int firstOcc = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            firstOcc = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
    }
    return firstOcc;
}


int lastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int lastOcc = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            lastOcc = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
    }

    return lastOcc;
}





int main(){

    int arr[] = {3, 4, 5, 6, 7, 22, 22, 22, 22, 22, 33, 45, 56, 100};
    int size = *(&arr + 1) - arr;

    int key = 22;


    int firstOccurenceAns = firstOccurence(arr, size, key);
    int lastOccurenceAns = lastOccurence(arr, size, key);


    cout<<endl;

    cout<<"Key "<<key<<" First Occurence "<<firstOccurenceAns<<endl;
    cout<<"Key "<<key<<" Last Occurence "<<lastOccurenceAns<<endl;




}