// Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.
// Note:
// 1. It is guaranteed that the node exists in the tree.
// 2. All the nodes of the tree have distinct values.


#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constractor
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

bool kthAncestor(Node* root , int &k , int& p){

    if(root == NULL){
        return false;
    }

    if( root ->data == p){
        return true;
    }

    bool leftselelo = kthAncestor(root->left , k , p);
    bool rightselele = kthAncestor(root->right , k , p);

    if(leftselelo == true || rightselele == true){
        k--;

        if(k==0){
            cout <<root->data;
            k = -1;
        }
        return leftselelo || rightselele;
    }

    return false;
}

int main(){
    Node* root = NULL;

    root = BuildTree();

    int k = 2;
    int p = 4;

kthAncestor(root, k , p);
}