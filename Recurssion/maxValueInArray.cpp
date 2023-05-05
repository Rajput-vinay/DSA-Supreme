#include<iostream>
#include<limits.h>
using namespace std;

void maxValue(int arr[],int n,int i,int& maxi){
    if(i>=n) return ;

    if(arr[i]>maxi)
    maxi = arr[i];

    maxValue(arr,n,i+1,maxi);
}

int main(){
    int arr[10] ={10,20,50,800,10,60,40,50,30,10};

    int n = sizeof(arr)/sizeof(int);
    int i =0;
    int maxi = INT_MIN;

     maxValue(arr,n,i,maxi);
    cout<<maxi;

    return 0;
}