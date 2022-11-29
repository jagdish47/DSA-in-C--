#include<iostream>
using namespace std;

    bool checkPalindrome(string str, int i, int j){

        if(i > j){
            return true;
        }

        if(str[i] != str[j]){
            return false;
        }
        else{
            return checkPalindrome(str, i+1, j-1);
        }
    }




int main(){

    string str = "madamm";
    int i = 0;
    int j = str.length() - 1;
    bool ans = checkPalindrome(str, i, j);

    if(ans){
        cout<<"it's Palindrome";
    }
    else{
        cout<<"not a Palindrome";
    }
}