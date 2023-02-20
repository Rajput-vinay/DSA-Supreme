// maximum 2d array

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
    vector<vector<int>> arr{{1,2,3},{45,85,92},{70,6,87}};
    int row = arr.size();
    int col = arr[0].size();
    int maxi = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxi)
            maxi =arr[i][j];
        }
    }
cout<<maxi;
return 0;
}