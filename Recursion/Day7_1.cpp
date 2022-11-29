#include<iostream>
#include<vector>
using namespace std;

void subSequence(string str, int len, int index, string ans, vector<string> &store){
    if(index == len){
        store.push_back(ans);
        return;
    }

    subSequence(str, len, index+1, ans + str[index], store);

    subSequence(str, len, index+1, ans, store);
}

int main(){
    string str = "abc";
    int index = 0;
    int len = str.length();
    vector<string> store;
    string ans = "";

    subSequence(str, len, index, ans, store);

    for(int i = 0; i < store.size(); i++){
        cout<<store[i]<<endl;
    }


    return 0;
}