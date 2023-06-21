#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memoert is free for node with data" << value << endl;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
}


int getLength(Node* &head){
 int len = 0;
 Node* temp = head;
 while(temp!=NULL){
    temp = temp->next;
    len++;
 }
 return len;
}

void insertAtBeg(Node* &head, Node* &tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
 
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node* &head, Node* &tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


void insertAtPos(Node* &head , Node* &tail,int pos , int data){

 // check if we insert at starting
if(pos==1){
    insertAtBeg(head,tail,data);
    return;
}
   
//  check if we insert LL at end
 int len = getLength(head);
if(pos>len){
    insertAtEnd(head, tail, data);
    return;
}
//  check ll is empty of note
if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail= newNode;
    return ;
}




//  condition for any position

 int i = 1;
 Node* left =  head;
    if(i!=pos-1){
        left = left->next;
        i++;
    }
  Node* right= left->next;
  Node* newNode = new  Node(data);
 
  newNode->next = right;
  right->prev = newNode;
   left->next = newNode;
   newNode->prev = left;
  
  
    
}
// ----------------------------------------------------------------------------------------------
//  deletion
// ==============================================================================================

void deleteLL(Node* &head, Node* & tail, int pos ){

    if(head==NULL){
        cout<<"We cannot delete the node from empty Linkedlist";
        return;
    }

    if(pos==1){
   Node* temp = head;
   head = head->next;
   head->prev = NULL;
   temp->next = NULL;
   delete(temp);
   return;
       }

    //    delete from last node

    int len = getLength(head);
    
    if(pos==len){
    Node* temp = tail;
    tail = tail->prev;
     tail ->next=NULL;
     temp->prev = NULL;
     delete(temp);
 return;
    }
    

    


    int i = 1;

    Node* left = head;
   while(i!=pos-1){
    left = left->next;
    i++;
   }

   Node* curr = left->next;
   Node* right = curr->next;
   left->next = right;
   right->prev = left;
   curr->next = NULL;
   curr->prev= NULL;
   delete(curr);
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtBeg(head, tail, 10);
    insertAtBeg(head, tail, 40);
    insertAtBeg(head, tail, 80);
    print(head);
    cout<<endl;
    insertAtEnd(head, tail, 8);
    print(head);
 
    cout<<endl;
    cout<<endl;

    insertAtPos(head,tail,4,400);
    print(head);

cout<<endl;
    cout<<"_______________________________________________________________________________________________";

cout<<endl;
    deleteLL(head,tail,5);
    print(head);
}