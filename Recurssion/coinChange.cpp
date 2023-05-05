#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr, int target){

    //  base case if value goes to be 0 and -ve

    if(target==0)
    return 0;

    if(target <0)
    return INT_MAX;

    // travese the array using for loop
       int  mini = INT_MAX;
    for(int i =0; i<arr.size(); i++){
        int ans = solve(arr,target-arr[i])+1;
        if(ans!=INT_MIN)
        mini = min(mini,ans);
    }
    return mini;
}


int main(){

    vector<int> arr {1,2};
    int target=7;

    int ans1 = solve(arr,target);
    
    cout<<"ans :"<<ans1;

    return 0;
}