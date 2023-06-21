#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int>&s ,int element){
     if(s.empty()){
      s.push(element);
        return;
    }

    int last = s.top();
    s.pop();

    // recursion call
    insertAtBottom(s,element);
    // backtrack
    s.push(last);
}


void reverse(stack<int>&s){
    if(s.empty()){
        
        return;
    }

    int element = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s ,element);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

reverse(s);
    while(!s.empty()){
        int temp = s.top();
        cout<<temp <<" ";
        s.pop();
        
    }
}