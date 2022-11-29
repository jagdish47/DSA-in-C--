#include<iostream>
#include<vector>
using namespace std;

int hourglassSum(vector<vector<int>> vec){
    int result = INT_MIN;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            int sum = vec[i][j]  + vec[i][j+1] + vec[i][j+2] + vec[i+1][j+1] +
                       vec[i+2][j] + vec[i+2][j+1] + vec[i+2][j+2];

            result = max(sum, result);
        }
    }
    return result;
}

int main(){
    vector<vector<int>> vec = {
                        {1, 1, 1, 0, 0, 0},
                        {0, 1, 0, 0, 0, 0},
                        {1, 1, 1, 0, 0, 0},
                        {0, 0, 2, 4, 4, 0},
                        {0, 0, 0, 2, 0, 0},
                        {0, 0, 1, 2, 4, 0}
                    };

    int ans = hourglassSum(vec);       
    cout<<ans;
    return 0;
}
