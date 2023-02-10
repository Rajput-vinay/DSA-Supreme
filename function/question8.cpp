// //  set ith bit
//  bit shift from right 

#include<iostream>
using namespace std;
int setIthValue(int num, int i){
    return ((1<<i)|num);
}
int main(){
    int num, i;
    cout<<"Enter the value of num : ";
    cin>>num;

    cout<<"Enter the ith value : ";
    cin>>i;
 int result = setIthValue(num, i);
    cout<< "bit shift from right "<<result;
}
// output
// Enter the value of num : 16
// Enter the ith value : 2
// bit shift from right 20

