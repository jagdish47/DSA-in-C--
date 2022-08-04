// Vector is an Dynamic array
// It also stores elements contiguous(Like we store in array)
// Dynamic - whenever we store value in vector and vector array is full than it create one more double size of array store all previes elements old one will be removed.
// We use vector much

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    // vector<type> name;

    vector<int> v(5);  //vector<type> name(size) 
    // {0, 0, 0, 0, 0};  //default all are 0(zero)

    vector<int> v(5, 1); //vector<type> name(size, all 1)
    // {1, 1, 1, 1, 1};

    // Copy Vector
    vector<int> last(v);
    // there is (v) vector already available and we create new vector (last) and copy all elements of (v) in last

    cout << "Capacity of vector right now (How many elements we can store in array) : " << v.capacity() << endl;

    // Add elements inside a vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "Capacity of vector right now (How many elements we can store in array) : " << v.capacity() << endl;

    cout << "total elements size of array (How many elements currently there in array) : " << v.size() << endl;

    cout << "Element on particular index : " << v.at(3) << endl;

    cout << "First element of vector : " << v.front() << endl;
    cout << "Last element of vector : " << v.back() << endl;


    cout<<"Before Pop" << endl;

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;


    v.pop_back();
    v.pop_back();

    cout<<"After Pop"<<endl;

    for(int j : v){
        cout<<j<<" ";
    }


    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i] <<"      ";
    // }
}