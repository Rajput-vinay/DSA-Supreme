//  print number of set bit

#include<iostream>
using namespace std;

int setBit(int n){
  int count =0;
  while(n>0){
    if(n%2!=0)
      count++;
      n=n/2;

  }
return count;
}

int main(){
  int n;
  cin>>n;

  int result = setBit(n);
  cout<<result;
}
