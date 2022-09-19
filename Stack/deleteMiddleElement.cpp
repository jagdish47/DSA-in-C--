#include<iostream>
#include<stack>
#include<math.h>
using namespace std;


int main(){

    int arr[] = {4,2,9,5,4};
    int size = *(&arr + 1) - arr;

    stack<int> st;


    for(int i = 0; i < size; i++){
        st.push(arr[i]);
    }

    int mid = (st.size()/2);

    for(int i = 0; i <= mid; i++){
        st.top()--;
    }



    return 0;
}