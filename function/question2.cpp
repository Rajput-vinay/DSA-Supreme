//  find maximum number of 3 number
#include<iostream>
using namespace std;

void maxNumber(int n1, int n2, int n3){
    if(n1>n2&&n1>n3){
        cout<<"The max value of num1 is : "<<n1;
    }
    else if(n2>n1&&n2>n3){
        cout<<"The max value of num2 is : "<<n2;
    }
    else if(n3>n1&&n3>n2){
       
        cout<<"The max value of num3 is : "<<n3;
    }
    else{
         cout<< "All value is Equals ";
    }
}

int main(){
    int num1 , num2, num3;
    cout<<" Enter the value of num1 : ";
    cin>>num1;
    
    cout<<"Enter the value of num2 : ";
    cin>>num2;

    cout<<"Enter the value of num3 : ";
    cin>>num3;
  
   maxNumber(num1, num2, num3);

}


//  output

//  Enter the value of num1 : 54
// Enter the value of num2 : 45
// Enter the value of num3 : 65
// The max value of num3 is : 65