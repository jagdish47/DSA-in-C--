#include<iostream>
using namespace std;

int longestCommonSubSequence(string a, string b, int i, int j){

    if(i == a.length()){
        return 0;
    }
    if(j == a.length()){
        return 0;
    }

    int ans = 0;

    if(a[i] == b[j]){
        ans = 1 + longestCommonSubSequence(a, b, i+1, j+1);
    }else{
        ans = max(longestCommonSubSequence(a, b, i, j+1), longestCommonSubSequence(a, b, i+1, j));
    }

    return ans;
}

int main(){

    string a = "abcde";
    string b = "abc";

    int i = 0; 
    int j = 0;

    int uttar = longestCommonSubSequence(a, b, i, j);
    cout<<uttar<<endl;

    return 0;
}