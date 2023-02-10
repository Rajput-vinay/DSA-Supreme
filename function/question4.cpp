//  find the factorial of a number

#include<iostream>
using namespace std;

int factorial(int n){
    int temp=1;
    for(int i=1; i<=n; i++){
   temp=temp*i;
    }
    return temp;

}

int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
  int result=factorial(num);
  cout<<result;

}