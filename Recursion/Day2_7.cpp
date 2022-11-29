#include<iostream>
#include<vector>
using namespace std;

// void totalOccurance(int arr[], int size, int index, int target){

//     if(arr[index] == target){
//         cout<<index<<" ";
//     }
    
//     if(index == size){
//         return;
//     }

//     totalOccurance(arr, size, index+1, target);
// }




void totalOccuranceStore(int arr[], int size, int index, int target, vector<int> &vect){

    if(index == size){
        return;
    }
    if(arr[index] == target){
        vect.push_back(index);
    }

    totalOccuranceStore(arr, size, index+1, target, vect);

}

int main(){

    int arr[] = {3, 4, 3, 4, 3};
    int size = *(&arr + 1) - arr;
    int index = 0;
    int target = 3;

    vector<int> vect;

    // totalOccurance(arr, size, index, target);
    totalOccuranceStore(arr, size, index, target, vect);


    for(int x : vect){
        cout<<x<<" ";
    }

    return 0;
}