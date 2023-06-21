// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){

// using stl library

//     // creation
//     stack<int> st;

//     // insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

// // remove
// st.pop();

// cout<<"Element on top is :"<<st.top()<<endl;

// // size

// cout<<"size of stack is "<<st.size()<<endl;

// if(st.empty()){

//     cout<<"stack is empty";

// }
// else{
//     cout<<"stack is not empty";
// }

// - ----------------------------------------------------------------------------------------------------------------

// }

// ----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <limits.h>
using namespace std;


class Stack
{
public:
    int *arr;
    int top;
    int size;

    
    Stack(int size)
    {
        arr = new int(size);
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (size - top < -1)
        {
            cout << "overflow condition is arise " << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "underflow condition is arise" << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {

        if (top == -1)
        {
            cout << "no element in the stack" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // creation
    Stack s(10);
    // insertion element in the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

// 
// top most element

cout<<" Top most element found are "<<s.getTop()<<endl;
cout<<endl<<"size of stack "<<s.getSize()<<endl;
while(!s.isEmpty()){
    cout<< s.getTop()<<endl;
    s.pop();
}

cout<<endl<<"size of stack "<<s.getSize();
return 0;
}