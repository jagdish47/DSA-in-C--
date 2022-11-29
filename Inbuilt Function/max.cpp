#include<iostream>
using namespace std;


int main(){
    int number1, number2;

    cout<<"Enter number 1 : ";
    cin>>number1;

    cout<<endl;

    cout<<"Enter number 2 : ";
    cin>>number2;

    cout<<endl;

    int ans = max(number1, number2);

    cout<<ans;
}


// std::max in C++

// It compares the two numbers passed in its arguments and returns the larger of the two, and if both are equal, then it returns the first one.