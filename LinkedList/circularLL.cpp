#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
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
        cout << "memoery is free for node with data " << value << endl;
    }
};

void print(Node *head)
{
    Node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    do
    {
        temp = temp->next;
        len++;
    } while (temp != head);
    
    return len;
}

void insertAtBeg(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node *newNode = new Node(data);
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node *newNode = new Node(data);
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

void insertAtPos(Node *&head, int pos, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = newNode;
        head = newNode;
        return;
    }

    if (pos == 1)
    {
        insertAtBeg(head, data);
        return;
    }

    int len = getLength(head);
    if (pos > len)
    {
        insertAtEnd(head, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i != pos - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}

void removeNodefromBeg(Node* &head, int pos)
{
   
    if (head == NULL)
    {
        cout << "Chutiya ho jo empty linkedlist m sa delete kar rah ho";
        return;
    }

    if (pos == 1)
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        Node *toDelete = head;
        temp->next = head->next;
        head = head->next;
        toDelete->next = NULL;
        delete(toDelete);
        return;
    }



 int len = getLength(head);
 
    if (pos == len)
    {
        Node *temp = head;

        int i = 1;
        while (i != pos - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        toDelete->next = NULL;
        delete (toDelete);
        return;
    }


   Node* prev = head;

    int i = 1;
    while(i!=pos-1){
  prev = prev->next;
  i++;
    }

    Node* curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete(curr);




// Node *temp = head;
// for(int i=1;i<pos-1;i++){
// temp=temp->next;
// }
// Node *toDel=temp->next;
// temp->next=toDel->next;
// toDel->next= NULL;
// delete(toDel);

}




int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtBeg(head, 1);
    insertAtBeg(head, 45);
    insertAtBeg(head, 50);
    print(head);
    cout << endl;
    insertAtEnd(head, 78);
    insertAtEnd(head, 100);
    print(head);

    cout << endl;
    insertAtPos(head, 5, 72);
    insertAtPos(head, 6, 1000);
    print(head);
    cout << endl;
    cout << endl;

    removeNodefromBeg(head,7);
    print(head);
}