#include<iostream>
#include<deque>
using namespace std;
 
 class queue
 {
 public:
 int *arr;
 int size;
 int front ;
 int rear;

 queue(int size){
    this->size = size;
    arr = new int(size);
    front =-1;
    rear =-1;

 }

 void pushRear(int data){
    // check karo queue is emepty is full or not
    if( rear == size -1 && front ==0){
        cout<<"queue is fulled";
    }
    else if(front == -1 && rear ==-1){
        front = rear = 0;
        
    }
    else if(rear == size -1 && front!=0){
        rear =0;
    }
    else{
        rear++;
    }
    arr[rear] = data;
 }

void pushFront(int data){
    if (front == 0 && rear == size -1){
        cout<<"queue is full";
    }
    else if(front ==-1 && rear ==-1){
        front = rear =0;
    }
    // else if(front ==0 && rear!=size-1){
    //     front = size-1;
    // }
    else{
        front--;
    }
    arr[front] = data;
}

void popFront(){
    // case 1 check queue is empty or not

    if(front == -1 && rear ==-1){
        cout<<"Queue is emepty not pop in element ";

    }
    else if(rear == front){
        arr[front] =-1;
        rear = front = -1;
    }

    if(front == size -1){
        front =0;
    }

    else{
        front++;
    }

}

void popRear(){
    if(front ==-1 && rear ==-1){
        cout<<"Queue is empty";

    }
    else if(front == rear){
        arr[rear] =-1;
        front = rear =-1;
    }
    else if(rear == 0){
        rear =size-1;
    }
    else{
        rear--;
    }

}

int getMax(){
    return rear - front +1;
}

 };

 int main(){
    queue s(10);
   
   s.pushFront(10);
   s.pushFront(20);
   s.pushFront(30);
   s.pushRear(50);
   s.pushRear(90);

   cout<<s.getMax()<<endl;
 }
 