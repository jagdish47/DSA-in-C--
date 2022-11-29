#include<iostream>
using namespace std;

bool solve(int i, int j, int ans, string str, string target){

    if(str.length() == ans){
        return true;
    }else{
        return false;
    }
    
    if(str[i] == target[j]){
        return (ans + 1) + solve(i+1, j+1, ans, str, target);
    }
    else{
        return solve(i, j+1, ans, str, target);
    }


}

int main(){
    string str = "abc";
    string target = "abc";
    int i = 0;
    int j = 0;
    int ans = 0;

    bool get = solve(i, j, ans, str, target);
    cout<<get<<endl;
}