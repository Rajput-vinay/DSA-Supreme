// // level order

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node
// {
// public:
//     /* data */
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         Node* left =NULL;
//         Node* right = NULL;
//     }
// };
// Node* BuildTree(){
//     int data;
//     cout<<"Enter the data ";
//     cin>>data;

//     if(data==-1){
//         return NULL;
//     }
//     Node* root = new Node(data);
//     cout<<"Enter the data "<<data<<"Left side of the tree"<<endl;
//     root->left = BuildTree();
//     cout<<"Enter the data "<<data<<"Right side of the tree"<<endl;
//     root->right = BuildTree();
//     return root;
// }

// void lvlOrder(Node* root){
//     queue<Node*> q;
//      q.push(root);

//      while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         cout<< temp->data<<" ";

//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//      }

// }

// int main(){
//     Node* root = NULL;
//    root= BuildTree();
//     lvlOrder(root);
// }

// upgarde the algo of lvl

// level order

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    /* data */
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        Node *left = NULL;
        Node *right = NULL;
    }
};
Node *BuildTree()
{
    int data;
    cout << "Enter the data ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data " << data << "Left side of the tree" << endl;
    root->left = BuildTree();
    cout << "Enter the data " << data << "Right side of the tree" << endl;
    root->right = BuildTree();
    return root;
}

void lvlOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}


int main()
{
    Node *root = NULL;
    root = BuildTree();
    lvlOrder(root);
}
