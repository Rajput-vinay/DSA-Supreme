#include<iostream>
using namespace std;

int power(int n, int a){

    if(a==0) 
    return 1;

    return n *power(n , a-1);
}


int main(){
    int n ;
    cout<<"Enter the base number : ";

    cin>>n;

    int a ;
    cout<<"Enter the Exponient value : ";
    cin>>a;

    int ans = power(n,a);
    cout<<ans;
}