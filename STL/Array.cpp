#include<iostream>
#include <array>
using namespace std;

// it works as normal array
// some additional functions available to use
// and it is also static type array so mostly we do not use this

int main(){

    // int arr[] = {3, 4, 5, 6, 7, 6};

    array<int, 4> a = {2, 3, 4, 54};
    // array<type, size> nameOfArray = {values};

    int size = a.size(); //This will give you size of array

    // for(int i = 0; i < size; i++){
    //     cout<<a[i] <<endl;
    // }


    cout<<"Give element at Index : "<<a.at(2)<<endl;
    cout<<"Check weather array is empty or not "<<a.empty()<<endl;

    cout<<"Gives First element of array "<<a.front()<<endl;
    cout<<"Gives Last element of array "<<a.back()<<endl;


    return 0;
}