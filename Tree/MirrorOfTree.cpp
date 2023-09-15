// Given two Binary Trees, returns true if two trees are mirror of each other, else false. 

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

Node* buildTree(){
    int data;
    cout<<"Enter the data ";
    cin>>data;

    if (data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    cout<<"Enter the data "<< data<<" into the left part"<<endl;
    root->left = buildTree();
    cout<<"Enter the data "<< data<<" into the right part"<<endl;
    root->right = buildTree();

    return root;
}


bool isMirror(Node* root1 , Node* root2){
    if(root1 == NULL &&root2 == NULL){
        return true;
    }

    if(root1 != NULL && root2 != NULL){
        return ((root1->data == root2->data) &&
               isMirror(root1->left , root2->right) &&
               isMirror(root1->right , root2->left));
    }

    return false;
}



int main(){
    Node* root1 =NULL;
    Node* root2 =NULL;
        cout<<"Enter the data into the root1 first wala tree "<<endl;
    root1 = buildTree();
    cout<<"Enter the data into the root2 second wala tree "<<endl;
    root2 = buildTree();
    if(isMirror){
        cout<<"The both the treee are Mirrow each other ";
    }
    else{
        cout<<"Both tree are not Mirrow each other";
    }

    return 0;
}