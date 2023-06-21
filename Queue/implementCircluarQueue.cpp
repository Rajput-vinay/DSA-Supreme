#include<iostream>
using namespace std;


class Cirqueue{
    public:
    int * arr;
    int size ;
    int front ;
    int rear;

    Cirqueue(int size){
        this ->size = size;
        arr = new int(size);
        front = -1;
        rear = -1;
    }

    void push(int data){
        // case 1 jab queue full tab ki baat

        if(front==0 && rear ==size-1){
            cout<<"Chutiya ho kya jo queue full h  or tum push kar rah ho element"<<endl;
        }

        // case 2 : jab queue is empty
        else if(front==-1 && rear ==-1){
          rear = 0;
          front =0;
          arr[rear] = data;
        }

        // case 3: jab first index empty ho

        else if(rear== size -1 && front!= 0){
            rear = 0;
            arr[rear] =data;
        }
//  case 4: normal case
        else{
              arr[rear++] = data;
        }

    }


    void pop(){
        //  case 1: check queue is empty
          if(front ==-1 && rear ==-1){
            cout<<"Queue is empty";
          }
        //   case 2 single element check karo
    else if(front == rear){
        arr[front] == -1;
        front =-1;
        rear =-1;
    }
    // case 3 check cricular nature;
    else if(front == size -1){
        front =0;
    }
    // case 4 normal flow
    else{
        front++;
    }

    }
    
    int getSize(){
        return rear - front+1;
    }
};



int main(){
Cirqueue s(10);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

 cout<<s.getSize()<<endl;
s.pop();
s.pop();
 cout<<s.getSize()<<endl;
}