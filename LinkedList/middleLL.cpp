// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next= NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int getLength(Node* head){
//     int len=0;
//     Node* temp = head;
//     while(temp!=NULL){
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// int middleLL(Node* head){
//     int n;
//     int len = getLength(head);
//     if(len%2==0){
//         n= len /2;
//         return n;
//     }
//     else{
//         n = len /2 +1;
//         return n;
//     }
// }

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);
//     head->next=second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     print(head);

//    int ans= middleLL(head);
//    cout<<endl;
//    cout<<ans;

// }









//  2nd approach

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
        this->data=data;
        this->next= NULL;
    }
};


void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* getMiddle(Node* &head){

    if(head==NULL){
        cout<<"LinkedList is empty ";
        return head;
    }

    if(head->next==NULL){
        return head;
    }


    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast= fast->next;

        if(fast!=NULL){
            fast=fast->next;
            slow = slow->next;
        }

    }
    return slow;

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

    cout<<"middle is "<< getMiddle(head)->data<<endl;

}
