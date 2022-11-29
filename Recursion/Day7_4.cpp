#include<iostream>
using namespace std;

int longestArithmaticSubSequence(int i, int diff, int arr[]){
    if(i < 0){
        return 0;
    }
    int ans = 0;
    for(int k = i - 1; k >= 0; k--){
        if(arr[i] - arr[k] == diff){
            ans = max(ans, longestArithmaticSubSequence(k, diff, arr));
        }
    }

    return ans;
}

int main(){
    int arr[] = {9, 4, 7, 2, 10};
    int size = 5;

    int ans = 0;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            
            int diff = arr[j] - arr[i];
            ans = max(ans, 2 + longestArithmaticSubSequence(i, diff, arr));
        }
    }

    cout<<ans<<endl;

    return 0;
}