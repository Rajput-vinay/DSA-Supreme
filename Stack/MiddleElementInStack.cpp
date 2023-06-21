#include<iostream>
#include<stack>

using namespace std;


void middleElement(stack<int>&s , int &totalSize){
   int mybeMiddle = totalSize /2 +1;

    if(s.size()== mybeMiddle){
        cout<<"Middle element "<<s.top();
return;
    }
   
        int temp = s.top() ;
        s.pop();

    

    middleElement(s ,totalSize);
    s.push(temp);
}

int main(){
    stack<int>s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
// s.push(80);
// s.push(90);

int totalSize = s.size();


middleElement(s , totalSize);
}