#include<iostream>
using namespace std;


// it's call by Value
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(){

//     int a = 10;
//     int b = 20;

//     swap(a, b);

//     cout<<a; //--> 10
//     cout<<endl; 
//     cout<<b; //--> 20
// }




// it's call by reference

// void swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(){

//     int a = 10;
//     int b = 20;

//     swap(a, b);

//     cout<<a; -->20
//     cout<<endl;
//     cout<<b; -->10
// }


// Another way to use call by reference

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 10;
    int b = 20;

    swap(&a, &b);

    cout<<a;  //-->20
    cout<<endl;
    cout<<b; //-->10
}