#include<iostream>
using namespace std;

int count(int n){
    if(n==0) return 0;
    cout<<n;

 int ans =count(n-1);
    
     return ans;
}

int main(){
    int n ;
    cout<<"Enter the number : ";

    cin>>n;

  int ans = count(n);
  
}