#include<iostream>
#include<stack>
using namespace std;

int main(){

    int arr[] = {3, 9, 12, 8, 4};
    int size = *(&arr + 1) - arr;

    int count = 0;

    stack<int> st;


    for(int i = 0; i < size; i++){
        st.push(arr[i]);
    }

   int mid = st.size()/2;

    while(st.empty() == false){
        if(mid == count){
            st.pop();
        }

        int y = st.top();
        st.pop();
        cout<<y<<" ";
        count++;
    }
    // for(int i = 0; i < st.size(); i++){
    //     if(mid == count){
    //         st.pop();
    //     }

    //     int x = st.top();
    //     st.pop();
    //     cout<<x<<" ";
    //     count++;
    // }

    return 0;
}