#include<iostream>
#include<stack>
using namespace std;

int main(){

    int arr[] = {3, 5, 9, 2, 4};
    int size = *(&arr + 1) - arr;

    stack<int> st;

    for(int i = 0; i < size; i++){
        st.push(arr[i]);

    }

    for(int i = 0; i < st.size(); i++){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}