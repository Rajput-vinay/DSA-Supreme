#include <iostream>
using namespace std;

// make a class 
class Node
{
public:
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


// creation of tree code
Node *buildTree()
{
    int data;
    cout << "Enter the data into the tree ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    cout << "Enter the data into the left of the tree ";
    root->left = buildTree();
    cout << "Enter the data into the right of the tree ";
    root->right = buildTree();

    return root;
}


// find height of the tree
int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int maxi  = max(leftHeight , rightHeight)+1;
     return maxi;

}


// check if tree is balanced or not
bool isBinaryTreeBlanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }


// solve a one case
    int leftWala = height(root->left);
    int rightWala = height(root->right);
    int diff = abs(leftWala - rightWala);
    bool ans = diff <= 1;


// make self call
    bool leftAns = isBinaryTreeBlanced(root->left);
    bool rightAns = isBinaryTreeBlanced(root->right);

    if (ans && leftAns && rightAns)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    int ans = isBinaryTreeBlanced(root);
    if (ans)
    {
        cout << "The given tree is a balanced binary Tree ";
    }

    else
    {
        cout << "The given Tree is non binary Tree ";
    }

    return 0;
}