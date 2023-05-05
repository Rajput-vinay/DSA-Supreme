#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr,int sum ,int i , int& maxi){
    if(i>=arr.size()){
      maxi = max(sum,maxi);
      return maxi;
    }

    // Exclusion
    solve(arr,sum , i+1,maxi);

    // 
   
    solve(arr,sum+arr[i],i+2,maxi);
}

int main(){

    vector<int>arr{5,5,10,100,10,5};

    int i =0;
    int maxi =INT_MIN;

    int sum =0;

    int ans = solve(arr,sum,i,maxi);
   cout<<ans;
}