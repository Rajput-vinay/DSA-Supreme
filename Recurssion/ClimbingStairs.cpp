#include<iostream>
using namespace std;

int ClimbingStairs(int n){
    if(n==0) return 1;
    if(n==1) return 1;

    return ClimbingStairs(n-1) +ClimbingStairs(n-2);
}


int main(){
    int n;
    cout<<"Enter the step : ";
    cin>>n;

    int ans = ClimbingStairs(n);
    cout<<ans;
}