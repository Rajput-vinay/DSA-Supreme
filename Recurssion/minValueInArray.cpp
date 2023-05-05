#include<iostream>
#include<limits.h>
using namespace std;

void minValue(int arr[],int n,int i,int& mini){
if(i>=n) return ;

if(arr[i]<mini){
    mini=arr[i];
}

minValue(arr,n,i+1,mini);

}

int main(){
    int arr[5]={10,25,4,-6,0};
    int n = sizeof(arr)/sizeof(int);

    int mini =INT_MAX;

    int i =0;
   minValue(arr,n,i,mini);

   cout<<mini;
   return 0; 
}