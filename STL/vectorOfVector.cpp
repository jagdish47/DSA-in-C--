#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // one of the way to define vector
    vector<vector<int>> vec 
    {
        {1, 2, 3},
        {4, 5, 7},
        {7, 8, 9, 3}
    };

    // cout<<vec[2].size()<<endl;  //column length
    // cout<<vec.size()<<endl; //row length


    for(int i = 0; i < vec.size(); i++){

        for(int j = 0; j < vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }


    


    // Defined vector

    // vector<vector<int>> vec;

    // int num = 10;


    // Inserting values inside vector using for loop
    // for (int i = 0; i < 4; i++)
    // {
    //     // define inner vector(just like a temporary vector)
    //     vector<int> v1;

    //     for (int j = 0; j < 5; j++)
    //     {
    //         v1.push_back(num);
    //         num += 5;
    //     }

    //     vec.push_back(v1);
    // }



    //Displaying vector
    // for(int i = 0; i < vec.size(); i++){

    //     for(int j = 0; j < vec[i].size(); j++){

    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}

// Vector -
// Vectors are known as dynamic arrays with the ability to resize itself automatically
// when an element is inserted or deleted, with their storage being handled automatically by the container.

// Vector of Vector -
//  Vector of Vectors is a two-dimensional vector with a variable number of rows where each row is vector.
//  Each index of vector stores a vector which can be traversed and accessed using iterators.
//  It is similar to an Array of Vectors but with dynamic properties.
