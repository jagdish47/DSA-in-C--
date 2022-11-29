#include<iostream>
using namespace std;


void solve(string str, int start, int len){
    if(start == len-1){
        return;
    }

    solve(str, start+1, len);
}


int main(){

    string str = "how are you";
    int len = str.length();
    int start = 0;


    solve(str, start, len);

    return 0;
}