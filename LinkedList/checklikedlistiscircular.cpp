#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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

bool isCircular(Node *head)
{
    if (head == NULL)
    {
        cout << "chutiya ho tum ";
        return true;
    }

    if (head->next == NULL)
    {
        cout << "ek number ";
        return true;
    }

    Node *slow = head->next;

    while (slow != head )
    {
        slow = slow->next;
        if (slow == head )
    {
        return true;
    }
    }

    return false;
}

int main()
{
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
    sixth->next = NULL;

    print(head);

    bool cir = isCircular(head);

    if (cir)
    {
        cout << "Linked list is circular";
    }
    
    
      
}
