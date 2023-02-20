//  find duplicate element

#include<iostream>
using namespace std;

int main(){
     int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3}; 

     int n = sizeof(arr)/sizeof(int);

     for(int i=0; i<n;i++)  
{
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            cout<<arr[i]<<" ";
        }
    }
}
return 0;
}