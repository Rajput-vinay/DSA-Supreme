// Given a number N, the task is to write a C program to print all digits of the number N in their original order.

// Input: N = 12
// Output: 1, 2
//
// Input: N = 1032
// Output: 1, 0, 3, 2

#include<iostream>
using namespace std;
int arr[1000];
int i=0;

void printAllDigit(int n){
  int r =0;
  while(n>0){
    r = n%10;
     n=n/10;
   arr[i]=r;
   i++;
  }
  for(int j=i-1;j>=0;j--){
    cout<<arr[j]<<",";
  }
}
int main(){
  int n;
  cout<<"Enter the value of n is : ";
  cin>>n;
  printAllDigit(n);
}
