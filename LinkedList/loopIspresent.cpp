//  loop is present or not

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};

// void print(Node* head){
//     Node* temp = head;
//     do{
//         cout<<temp->data<< " ";
//         temp = temp->next;
//     }while(temp!=head);
// }

bool isLoopPresent(Node* & head){
    if(head ==NULL){
        return false;
    }

    if(head->next == NULL){
        return true;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
            slow = slow->next;
        }
     if(slow== fast){
        return true;
     }
    }
  return false;

}







int main(){
    
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = fourth;

    // print(head);

cout<<"check loop is present or not  "<<isLoopPresent(head);
    

}