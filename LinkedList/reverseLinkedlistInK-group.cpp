#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next= NULL;
    }
};


void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int getLength(Node* head){
    int len =0;
    Node* temp = head;

    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
 return len;
}

Node* reverseKgroup(Node* head , int k ){

    if(head==NULL){
        cout<<"Chutiya ho tum :";
        return head;
    }

    if(head->next == NULL){
        cout<<"Tum kuch nhi ho sasth :";
        return head ;
    }

 int len = getLength(head);
    if(k>len){
        cout<<"Invaild value :";
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* right = curr->next;
   int count = 0;
    while(count<k){
        right= curr->next;
        curr->next = prev;
        prev = curr;
        curr= right;
        count++;
    }
    if(right!=NULL){
        head->next = reverseKgroup(right,k);
    }
    return prev;
 
}



int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    head->next=second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;


  print(head);
  cout<<endl;
  head = reverseKgroup(head,3);
   print(head);
}