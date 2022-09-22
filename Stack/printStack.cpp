#include<iostream>
#include<stack>
using namespace std;

void recursionStackPrint(stack<int> st){
    if(st.empty() == true){
        return;
    }

    int x = st.top();
    st.pop();
    cout<<x<<" ";
    //this will print array in reverse order 4, 2, 9, 5, 3
    recursionStackPrint(st);
}
int main(){

    int arr[] = {3, 5, 9, 2, 4};
    int size = *(&arr + 1) - arr;

    stack<int> st;

    for(int i = 0; i < size; i++){
        st.push(arr[i]);
    }

    recursionStackPrint(st);
    return 0;
}