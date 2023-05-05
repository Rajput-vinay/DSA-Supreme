#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& robbery,int& maxi , int i ,int sum){
    if(i>=robbery.size()){
        maxi = max(sum , maxi);
        return maxi;
    }

    // exclusion
     solve(robbery,maxi,i+1,sum);

    //  inclusion
    solve(robbery,maxi,i+2,sum+robbery[i]);
}



int main(){
    vector<int>robbrey{2,7,9,3,1};
    int maxi = INT_MIN;

    int i =0;
    int sum =0;

    int ans = solve(robbrey,maxi,i,sum);
    cout<<ans;
}