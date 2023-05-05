#include<iostream>
#include<limits.h>
using namespace std;

int solve(int n,int x,int y,int z){
    if(n==0) return 0;

    if(n<0) return INT_MIN;
     
    int a = solve(n-x,x,y,z);
    int b = solve(n-y,x,y,z)
    int c = solve(n-z,x,y,z);
    int ans = max(a,max(b,c))+1
    return ans;
}



int main(){
    int n = 11;
    int x = 2;
    int y = 3;
    int z = 5;

    int ans = solve(n,x,y,z);
    cout<<ans;
}