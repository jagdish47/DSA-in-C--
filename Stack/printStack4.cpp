#include<iostream>
#include<stack>
using namespace std;

void recursionStack(stack<int> st){
    if(st.empty() == true){
        return;
    }
    int x = st.top();
    st.pop();
    recursionStack(st);

    cout<<x<<" ";

}

int main(){
    int arr[] = {3, 5, 9, 2, 4};
        int s = *(&arr + 1) - arr;

        stack<int> st;

        for(int i = 0; i < s; i++){
            st.push(arr[i]);
        }

        recursionStack(st);
}