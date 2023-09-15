#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        Node* left = NULL;
        Node* right = NULL;
    }
};

Node* build(){
    int data;
    cout<<"Enter the data into the Tree "<<endl;
    cin>>data;

    Node* root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data into the left part of tree "<<endl;
    root ->left = build();
    cout<<"Enter the data into the right part of tree "<<endl;
    root->right = build();

    return root;
}

int SumbinaryTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftSeLelo = SumbinaryTree(root->left);
    int rightSeLelo = SumbinaryTree(root ->right);
    root->data= leftSeLelo + rightSeLelo +root->data;

    return root->data;
}

int main(){
    Node* root = NULL;
    root = build();
    int ans = SumbinaryTree(root);
    cout<<ans;
}
