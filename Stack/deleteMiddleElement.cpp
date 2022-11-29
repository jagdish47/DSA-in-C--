#include<iostream>
#include<stack>
using namespace std;

void deleteMiddleElem(stack<int> st, int mid, int count){
    if(mid == count){
        st.pop();
        return;
    }

    int x = st.top();
    st.pop();

    deleteMiddleElem(st, mid, count++);
    st.push(x);

}
int main(){

    int arr[] = {5, 9, 12, 8, 4};
    int size = *(&arr + 1) - arr;

    int count = 0;

    stack<int> st;


    for(int i = 0; i < size; i++){
        st.push(arr[i]);
    }

   int mid = st.size()/2;

   deleteMiddleElem(st, mid, count);

    return 0;
}