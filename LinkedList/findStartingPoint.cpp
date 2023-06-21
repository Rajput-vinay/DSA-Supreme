//  find starting point of linkedlist




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


Node* isLoopstarting(Node* & head){
    if(head ==NULL){
        return NULL;
    }

    if(head->next == NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
            slow = slow->next;
        }
     if(slow == fast){
        slow = head;
        break;
     }
    }
  while(slow!=fast){
    slow= slow ->next;
    fast= fast->next;

  }
return slow;
}


//  remove loop

Node* isremoveLoop(Node* & head){
    if(head ==NULL){
        return NULL;
    }

    if(head->next == NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
            slow = slow->next;
        }
     if(slow == fast){
        slow = head;
        break;
     }
    }
    Node* prev = fast;
  while(slow!=fast){
    prev = fast;
    slow= slow ->next;
    fast= fast->next;

  }
  prev ->next = NULL;
return slow;
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
  cout<<" loop is present or not "<<isLoopPresent(head);
  cout<<endl;
//   cout<<"starting point of loop is  " <<isLoopstarting(head)->data;

   isremoveLoop(head);
   print(head);

}