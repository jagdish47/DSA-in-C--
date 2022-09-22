#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3, 5, 9, 2, 4};
    int s = *(&arr + 1) - arr;

    stack<int> st;

    int i = 0;
    while(s - 1 >= 0){
        st.push(arr[i]);
        s--;
        i++;
    }


    while(st.empty() == false){
        cout<<st.top()<<" ";
        st.pop();
    }
}