#include<iostream>
using namespace std;


void print(int arr[], int key, int start, int end){

    for(int i = start; i <= end; i++){
        cout<<arr[i] << "  ";
        cout<<key<<endl;
        cout<<start<<endl;
        cout<<end<<endl;
    }
}

int firstOccurence(int arr[], int key, int start, int end){
    
    print(arr, key, start, end);

    int firstOccu = -1;

    if(start > false){
        return -1;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        mid = firstOccu;
        return firstOccurence(arr, key, start, mid-1);
    }

    else if(key > arr[mid]){
        return firstOccurence(arr, key, mid+1, end);
    }
    else if(key < arr[mid]){
        return firstOccurence(arr, key, start, mid-1);
    }

    return firstOccu;
}




int main(){
    int arr[] = {3, 4, 6, 7, 22, 22, 22, 22, 22, 22};
    int size = *(&arr + 1) - arr;
    int key = 22;
    int start = 0;
    int end = size - 1;

    int firstOccurenceAns = firstOccurence(arr, key, start, end);
    cout<<firstOccurence;


}