#include<iostream>
using namespace std;

class Node{

    public:
     int data;
     Node* next;


     Node(){
        this->data=0;
        this->next=NULL;
     }

     Node(int data){
        this->data = data;
        this->next=NULL;
     }

     //TODO: Write a destrcutor to delete a node
        ~Node() {
            int value = this->data;
            //  memory free
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
                //write your code here
                cout << "Node with value: " << this->data << "deleted" << endl;
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


void insertAtEnd(Node* &head , Node* &tail, int data){

    if(head==NULL){
        Node* newNode= new Node(data);
        head= newNode;
        tail= newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next= newNode;
    tail= newNode;
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPos(Node* &head , Node* &tail, int data,int pos){

if(pos==1){
    insertAtBeg(head,tail,data);
    return;
}

int len = findLength(head);

if(pos>len){
    insertAtEnd(head,tail,data);
    return;
}

if(head==NULL){
    Node* newNode = new Node(data);
    head= newNode;
    tail = newNode;
    return;
}

int i =1;
Node* prev = head;
while(i!=pos-1){
    
    prev = prev->next;
    i++;
}
Node* curr = prev->next;
Node* newNode = new Node(data);
newNode->next = curr;
prev->next = newNode;
}


// _____________________________________________________________________________________________________________________________
//  delete the function
// ________________________________________________________________________________________________________________________________

void deleteAtBeg(Node* &head, Node* &tail,int pos){

    

    if(head==NULL){
        cout<<"Deletion is not possible because LL is empty";
        return;
    }
//  delete from beg
    if(pos==1){
    Node* temp= head;
    head=head->next;
    temp->next=NULL;
    delete(temp);

    }

//  delete from end
    int len = findLength(head);

    while(len==pos){
        int i = 1;
        Node* prev= head;
        while(i < pos-1){
            prev= prev->next;
            i++;
        }
        prev->next=NULL;
        Node* temp= tail;
        tail=prev;

        delete(temp);
        return;


    }

    // delete from any position


    int i = 1;
   
     Node* prev = head;
    while(i<pos){
   prev = prev->next;
   i++;
    }

    Node* curr= prev->next;
    prev->next = curr->next;
    curr->next= NULL;
    delete(curr);
}


int main(){
Node* head = NULL;
Node* tail= NULL;

insertAtBeg(head,tail,120);

insertAtBeg(head,tail,40);

print(head);
cout<<endl;
insertAtEnd(head,tail,20);
 
 print(head);
 cout<<endl;
insertAtPos(head,tail,70,3);
print(head);
// insertAtPos(head, tail,10,5;

// deleteAtBeg(head,tail,1);
// print(head);
// cout<<endl;
// deleteAtBeg(head, tail,2);
// print(head);
// cout<<endl;

}