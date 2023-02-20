//  find missing element

#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,8,9};
    int n = sizeof(arr)/sizeof(int);
    //  give the range of element 1 to range +1 of element
   int N = n+1;
    int start = N*(N+1)/2;
     int sum =0;
    for(int i = 0;i<n;i++){
         sum = sum +arr[i];
    }

    int result =  start-sum;
    cout<<result;
}

