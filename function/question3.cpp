//  find no is even or odd

#include<iostream>
using namespace std;

void evenOrOdd( int num){
if(num%2==0){
   
    cout<<"The given number is Even";
}
else{
    cout<<"The given number is odd";
}
}

int main(){
    int num ;
    cout<<"Enter the value of num : ";
    cin>>num;
    evenOrOdd(num);
}


// output
// Enter the value of num : 8
// The given number is Even