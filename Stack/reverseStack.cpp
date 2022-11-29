#include<iostream>
#include<stack>
using namespace std;



int main(){

    string str = "abcdefghijklmnopqrstuvwxyz";
    stack<char> st;

    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }

    string store = "";
    while(!st.empty()){
        char ch = st.top();
        store.push_back(ch);
        st.pop();
    }


    cout<<store<<endl;






    return 0;
}