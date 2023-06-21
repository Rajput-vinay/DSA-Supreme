#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};


void print(Node* head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
            }
}


void insertAtBeg(Node* &head , Node* &tail, int data){

    if(head==NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail= newNode;
        return ;
    }

    Node* newNode = new Node(data);
    newNode->next= head;
    head = newNode;
}

Node* reverse(Node* prev, Node* curr){
    if(curr == NULL){
        return prev;
    }

Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr= temp;

  return reverse(prev, curr);


}

int main(){
    Node* head= NULL;
    Node* tail = NULL;


  insertAtBeg(head, tail,50);
  insertAtBeg(head, tail,60);
  insertAtBeg(head, tail, 620);

  print(head);
cout<<endl;
  Node* prev=  NULL;
  Node* curr= head;
  head=reverse(prev, curr);
  print(head);
}
