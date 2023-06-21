#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int target){
     if(s.empty()){
       s.push(target);
        return;
    }

    int element = s.top();
    s.pop();

    // recursion call
    insertAtBottom(s,target);
    // backtrack
    s.push(element);
}

void solve(stack<int>&s){
    // condition check stack is empty or not
   
    if(s.empty()){
        cout<<"Stack is empty ";
     
       return;
    }

    int element= s.top();
    s.pop();

    // make function call
    insertAtBottom(s ,element);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

 

solve(s);
    while (!s.empty())
    {
        int element = s.top();
        cout<<element<<" ";
        s.pop();

    }
    
}