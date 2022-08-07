#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans){

    if(index >= str.size()){
        ans.push_back(output);
        return;
    }

    solve(str, output, index+1, ans);

    char element = str[index];

    output.push_back(element);

    solve(str, output, index+1, ans);
}

int main(){
    string str = "abc";

    vector<string> ans;

    string output = "";
    int index = 0;

    solve(str, output, index, ans);


    for(int i = 0; i < ans.size(); i++){
        
        for(int j = 0; j < ans[i].size(); j++){

            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}