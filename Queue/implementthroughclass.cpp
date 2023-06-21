#include<iostream>

using namespace std;

class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    queue(int size){
        this->size = size;
        arr= new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){

        if(rear==size){
            cout<<"Queue is fulled";
            
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(front==rear){
            cout<<"Queue is empty";
        }
        else{
            arr[front] = -1;
            front++;
            if(front==rear){
                front = 0;
                rear=0;
            }
        }
    }

    int getFront(){
        if(front==rear){
           cout<<"queue is empty";
           return -1;
        }
        else{
            return arr[front];
        }
        
    }

bool isEmpty(){
    if(front == rear){
        return true;
    }
    else{
        return false;
    }
}

    int getSize(){
        return rear - front;
    }
};





int main(){ 
    queue s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(60);

    cout<<"sizeof queue is "<<s.getSize();

    //  if(s.isEmpty()){
    //     cout<<"q queue is empty";
    //  }
    //  else{
    //     cout<<"q queue is not empty";
    //  }

}