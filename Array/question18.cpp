
//  linear search in 2-D array

#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>>arr{{111,225,3},
                           {495,58,6},
                            {71,10,9}};

       int row =arr.size();
       int col=arr[0].size();

       int mini =INT_MAX;

       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
       
       }   
        cout<<mini;
       return 0;                  
}