#include<iostream>
using namespace std;
// Method - 1
// void reverseString(string str, int len, int begin){

//     if(begin == len){
//         return;
//     }

//     reverseString(str, len, begin+1);
//     cout<<str[begin];
// }


// Method-2
// void reverseString(string str, int len, int begin, string &bag){
//     if(begin == len){
//         return;
//     }

//     reverseString(str, len, begin+1, bag);
//     bag += str[begin];
// }


// Method - 3
void reverseString(string &str, int len, int begin){
    if(begin >= len){
        return;
    }

    swap(str[begin], str[len]);

    reverseString(str, len-1, begin+1);
}



int main(){
    string str = "RAHUL";
    string bag = "";
    int len = str.length();
    int begin = 0;
 
    // method - 1
    // reverseString(str, len, begin);

    // method-2
    // reverseString(str, len, begin, bag);
    // cout<<bag<<endl;

    // method-3
    reverseString(str, len-1, begin);
    cout<<str;




    return 0;
}