// enter n number of digits and form a number using these digits

#include<iostream>
using namespace std;
int enterDigit(int n){
int number =0;
  for(int i=0;i<n;i++){
    int temp;
    cout<<"Enter the digit : ";
    cin>>temp;
       number = number*10 +temp;
  }
cout<<" The number using digit is : "<<number;
}
int main(){
  int n;
  cin>>n;
   int result= enterDigit(n);

}
