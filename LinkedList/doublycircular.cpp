#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int data){
        this->data= data;
        this->next = NULL;
        this->next = NULL;
    }
    ~Node(){
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
    }
};


void print(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    while(temp!=head);
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    do{
        temp = temp->next;
        len++;
    }
    while(temp!=head);
    return len;
}

void insertAtBeg(Node* &head, Node* &tail, int data){
    if(head== NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }

    Node* newNode = new Node(data);
    
    tail->next = newNode;
    newNode->next = head;
    newNode->prev=tail;
    head->prev = newNode;
    head= newNode;
}

void insertAtEnd(Node* &head, Node* &tail, int data){
     if(head== NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }
   Node* newNode = new Node(data);
   tail->next = newNode;
   newNode->prev = tail;
   newNode->next= head;
   head->prev= newNode;
   tail= newNode;  

 
}


void insertAtPos(Node* &head, Node* &tail, int data, int pos){
     if(head== NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }

    if(pos==1){
        insertAtBeg(head,tail,data);
        return;
    }
  int len = getLength(head);
    if(pos==len){
        insertAtEnd(head, tail, data);
        return;
    }



    int i = 1;
    Node* prev = head;
    while(i!= pos-1){
         prev=  prev->next;
        i++;
    }

    Node* curr=  prev->next;
    Node* newNode= new Node(data);
    newNode -> next = curr;
    newNode->prev = prev;
    prev->next = newNode;
    curr->prev= newNode;



}

void remove(Node* head, Node* tail, int pos){

    if(head==NULL){
        cout<<"Chutiya ho kya ";
        cout<<endl;
        return;
    }

    if(pos==1){
        Node* temp = head;
        head= head->next;
        tail->next = head;
        head->prev = tail;
        temp->next = NULL;
        delete(temp);
        return;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtBeg(head,tail,40);
    insertAtBeg(head,tail,80);
    print(head);

cout<<endl;
cout<<endl;
    insertAtEnd(head, tail, 50);
    insertAtEnd(head,tail, 83);
  print(head);
cout<<endl;
cout<<endl;

   insertAtPos(head,tail,5,4);
   print(head);


 cout<<endl;
 cout<<endl;
    remove(head,tail,1);
  print(head);
}