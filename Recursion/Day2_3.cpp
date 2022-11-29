#include<iostream>
using namespace std;

// int findMaximum(int arr[], int size, int index, int &maxi){


//     if(index == size){
//         return maxi;
//     }

//     if(maxi < arr[index]){
//         maxi = arr[index];
//     }

//     findMaximum(arr, size, index+1, maxi);

//     // return maxi;  //You can return from here also

// }



// int getMax(int arr[], int size, int index){
//     if(size == index){
//         return INT_MIN;  //Minimum value for a variable of type int 
//     }

//     int ans = arr[index];

//     int recCall = getMax(arr, size, index+1);

//     return max(ans, recCall);


// }



int anotherApproach(int arr[], int size, int index){
    if(size == 0){
        return INT_MIN;
    }

    int maxi = arr[0];

    int ans = anotherApproach(arr+1, size-1, index);

    return ans = max(maxi, ans);

}

int main(){

    int arr[] = {7, 2, 15, 9, 21, 18};
    int size = *(&arr + 1) - arr;
    int index = 0;
    int maxi = arr[0];

    // int ans = findMaximum(arr, size, index, maxi);
    // int ans = getMax(arr, size, index);
    int ans = anotherApproach(arr, size, index);

    cout<<ans;

 
    return 0;    
}