//  convert celsius to fahrenheit 

#include<iostream>
using namespace std;

int convertValue(float n){
     float f = (9 * n) / 5; 
     f += 32; 
     return f;
}

int main(){
    float num;
    cout<<"Enter the value in celsius  : ";
    cin>>num;
    float result = convertValue(num);
    cout<<result;

}


// output
// Enter the value in celsius  : 36
// 96