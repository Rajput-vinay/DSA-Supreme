// convert distance in Km into miles

#include<iostream>
using namespace std;
 void kiloIntoMiles(double n){
double miles = n * 0.621371;
   cout<<"convert into miles : "<< miles<<" miles";
 }
int main(){
  double n;
  cout<<"Enter the kilometer : ";
  cin>>n;
kiloIntoMiles(n);


}


// Output
// Enter the kilometer : 14
// convert into miles : 8.69919
