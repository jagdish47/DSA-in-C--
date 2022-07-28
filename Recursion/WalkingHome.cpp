#include <iostream>
using namespace std;


void walkHome(int src, int dest){

    cout <<"src " << src << " dest " <<dest <<endl;

    if(src == dest){
        cout<<"at Home";

        return;
    }

    walkHome(src+1, dest);
}



int main(){
    int src = 1;
    int dest = 10;


    walkHome(src, dest);

    return 0;
}