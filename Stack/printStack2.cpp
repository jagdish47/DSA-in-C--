#include<iostream>
#include<stack>
using namespace std;


int main(){
    int arr[] = {3, 5, 9, 2, 4};
    int s = *(&arr + 1) - arr;

    stack<int> st;

    for(int i = 0; i < s; i++){
        st.push(arr[i]);
    }

    
}