#include<iostream>
#include<vector>
using namespace std;

// void subSequence(string str, int len, int index, string ans, int &total){
//     if(index == len){
//         total++;
//         cout<<ans<<endl;
//         return;
//     }

//     //Include
//     subSequence(str, len, index+1, ans + str[index], total);
//     //exclude.
//     subSequence(str, len, index+1, ans, total);
// }




void subSequence(string str, int len, int index, string ans, vector<string> &store){
    if(index == len){
        store.push_back(ans);
        return;
    }

    subSequence(str, len, index+1,ans + str[index], store);

    subSequence(str, len, index+1, ans, store);
}

int main(){
    string str = "abc";
    int len = str.length();
    int index = 0;
    vector<string> store;
    string ans = "";
    int total = 0;

    // subSequence(str, len, index, ans, total);
    // cout<<total;

    subSequence(str, len, index, ans, store);

    for(int i = 0; i < store.size(); i++){
        cout<<store[i]<<endl;
    }

    return 0;

}