// //  sort zero , one and two

// #include<iostream>
// using namespace std;


// class  Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data= data;
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
// void sortZeroOneTwo(Node* &head){

//     Node* temp = head;
//     int zeroCount =0;
//     int oneCount=  0;
//     int twoCount = 0;

//     while(temp!=NULL){
//         if(temp->data==0){
//         zeroCount++;
//     }

//    else if(temp->data == 1){
//         oneCount++;
//     }
    
//     else if(temp->data==2){
//         twoCount++;
//     }

// temp = temp->next;

//   }

// temp = head;
  
//    while(zeroCount--){
//         temp->data = 0;
//         temp = temp->next;
//     }

//     while(oneCount--){
//         temp->data = 1;
//         temp= temp->next;
//     }

//     while(twoCount--){
//         temp ->data= 2;
//         temp = temp->next;
//     }

  
// }




// int main(){
// Node* head = new Node(1);
// Node* second = new Node(0);
// Node* third = new Node(1);
// Node* fourth = new Node(0);
// Node* fifth = new Node(2);
// Node* sixth = new Node(2);

// head->next  = second;
// second->next = third;
// third->next = fourth;
// fourth->next = fifth;
// fifth->next = sixth;
// sixth ->next = NULL;

// print(head);
//  cout<<endl;

// sortZeroOneTwo(head);
// print(head);
// }

// ____________________________________________________-----_____________________________________________________________________________________________________





#include<iostream>
using namespace std;


class  Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
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


Node* sortZeroOnetwo(Node* &head){

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

  Node* curr = head;
  
  while(curr!=NULL){

    if(curr->data == 0){
        Node* temp = curr;
        curr= curr->next ;
        temp->next = NULL;

        //  join the  link

        zeroTail->next = temp;
        zeroTail=temp;
    }

   else if(curr->data == 1){
        Node* temp = curr;
        curr= curr->next ;
        temp->next = NULL;
        //  join the  link
        //   join the  link
        oneTail->next = temp;
        oneTail=temp;
    }
    else if(curr->data == 2){
        Node* temp = curr;
        curr= curr->next ;
        temp->next = NULL;
        //  join the  link
        //   join the  link
        twoTail->next = temp;
        twoTail=temp;
    }
  }

  Node* temp = oneHead;
  oneHead = oneHead->next;
  temp->next = NULL;
  delete temp;
  
Node* temp2 = twoHead;
twoHead = twoHead->next;
temp2->next = NULL;
delete temp2;

if(oneHead!=NULL){
    zeroTail->next = oneHead;
    if(twoHead!=NULL){
        oneTail->next= twoHead;
    }
}

else{
    zeroTail->next = oneHead;
}

Node* temp3 = zeroHead;
zeroHead= zeroHead ->next;
temp3->next = NULL;
delete temp3;

return zeroHead;

  }

int main(){
Node* head = new Node(1);
Node* second = new Node(0);
Node* third = new Node(1);
Node* fourth = new Node(0);
Node* fifth = new Node(2);
Node* sixth = new Node(2);

head->next  = second;
second->next = third;
third->next = fourth;
fourth->next = fifth;
fifth->next = sixth;
sixth ->next = NULL;

print(head);
 cout<<endl;

head=sortZeroOnetwo(head);
print(head);
}