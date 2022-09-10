#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector<int> vec){
    vector<int> ans;

    for(int i = vec.size() - 1; i >= 0; i--){
        ans.push_back(vec[i]);
    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<int> vec = {4,3,2,1};

    reverseVector(vec);

    return 0;
}