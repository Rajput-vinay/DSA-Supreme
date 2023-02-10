//  Write a function to add 2 number

#include<iostream>
using namespace std;

int addNumber(int a, int b){
    return a+b;
}

int main(){
    int num1, num2;
    cout<<"Enter the value of num1: ";
    cin>>num1;

    cout<<"Enter the value of num2: ";
    cin>>num2;

 int result = addNumber(num1 , num2);
  cout<<"sum of num1 and num2 is : "<<result;

    
}

//  output look like this
// Enter the value of num1: 5
// Enter the value of num2: 4
// sum of num1 and num2 is : 9