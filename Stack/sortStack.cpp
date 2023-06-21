
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void sortedInsert(stack<int> &s, int key)
{
    
    if ( s.empty() ||key > s.top())
    {
        s.push(key);
        return;
    }
 
    
    int top = s.top();
    s.pop();
 
   
    sortedInsert(s, key);
 
    // insert the popped element back into the stack
    s.push(top);
}
 

void sortstack(stack<int> &s)
{
    // base case: stack is empty
    if (s.empty()) {
        return;
    }
 
    // remove the top element
    int top = s.top();
    s.pop();
 
    // recur for the remaining elements in the stack
    sortstack(s);
 
    // insert the popped element back into the sorted stack
    sortedInsert(s, top);
}
 
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
 
int main()
{
    vector<int> list = { 5, -2, 9, -7, 3 };
 
    stack<int> s;
    for (int i: list) {
        s.push(i);
    }
 
    cout << "Stack before sorting: ";
    printStack(s);
 
    sortstack(s);
 
    cout << "Stack after sorting: ";
    printStack(s);
 
    return 0;
}
