#include<iostream>
using namespace std;

void reversePrintArray(int arr[],int n, int i){
    if(i>=n) return;

    

    reversePrintArray(arr,n,i+1);
    cout<<arr[i]<<" ";
}



int main(){
    int arr[10] ={10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);
    int i =0;
    reversePrintArray(arr,n,i);
}