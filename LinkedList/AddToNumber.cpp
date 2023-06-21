// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.


#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void print(Node* head1){
    Node* temp = head1;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverse(Node* & head){
    Node* prev = NULL;
    Node* curr= head;
    Node* right = curr->next;

    while(curr!=NULL){
        right = curr->next;
        curr->next = prev;
        prev = curr;
        curr = right;
    }
    return prev;
}



Node* addtwoNumber(Node* & head1 , Node* & head2){
head1= reverse(head1);
head2 = reverse(head2);

Node* ansHead = NULL;
Node* ansTail = NULL;

int carry = 0;

while(head1!=NULL && head2!=NULL){
    int sum = carry + head1->data + head2->data;
    int digit = sum%10;
    int carry = sum/10;
    //  create new node
    Node* newNode = new Node(digit);

    if(newNode==NULL){
        ansHead=newNode;
        ansTail = newNode;
    }
    else{
        ansTail->next = newNode;
        ansTail = newNode;

    }

    head1 = head1->next;
    head2= head2->next;
}

while(head1!=NULL){
    int sum = carry + head1->data;
    int digit = sum%10;
    carry = sum/10;

    Node* newNode = new Node(digit);
    ansTail->next = newNode;
    ansTail = newNode;
    head1 = head1->next;
}

while(head2!=NULL){
    int sum = carry + head2->data;
    int digit = sum%10;
    carry = sum/10;

    Node* newNode = new Node(digit);
    ansTail->next = newNode;
    ansTail = newNode;
    head2 = head2->next;
}


while(carry!=0){
    int sum = carry;
    int digit = sum%10;
    carry = sum/10;
    Node* newNode = new Node(digit);
    ansTail->next  = newNode;
    ansTail = newNode; 
}

ansHead = reverse(ansHead);

return ansHead;
}



int main(){
    Node* head1 = new Node(7);
    Node* second = new Node(8);


  head1->next =second;
  second->next = NULL;



    Node* head2 = new Node(5);
    Node* third = new Node(4);

    head2->next = third;
    third->next = NULL;

    print(head1);

    cout<<endl;

    print(head2);

    Node* ans = addtwoNumber(head1 ,head2);
    print(ans);
}