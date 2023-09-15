// Problem Statement
// Given the roots of two binary trees, determine if these trees are identical or not. Identical trees have
//  the same layout and data at each node. Consider the following two
//  identical binary trees that have the same layout and data.

// It is not necessary that trees that have the same data are identical trees. 
// Trees that have the exact same data may not be structurally identical. 
// For example if you look at the two trees below, although they have the same data, 
// they are not identical.





#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        Node* left = NULL;
        Node* right = NULL;
    }
};


Node* BuildTree(){
    int data;
    cout<<"Enter the data in root1 ";
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    cout<<"Enter the data "<< data <<"Left part"<<endl;
    root->left = BuildTreeroot1();
    cout<<"Enter the data "<< data <<"Left part"<<endl;
    root->right = BuildTreeroot1();

    return root;
}

 bool isIdentitical(Node* root1 , Node* root2){
    if(root1  == NULL && root2== NULL){
        return true;
    }

    if(root1 !=NULL && root2 != NULL){
        return ((root1->data == root2->data) && 
        isIdentitical(root1->left , root2->left) && 
        isIdentitical(root1->right, root2->right));

        
    }
    return false;
 }

int main(){
    Node* root1 = NULL;
    Node* root2 = NULL;
    cout<<"Enter the data into the root 1 me "<<endl;
    root1 = BuildTree();
    cout<<"Enter the data into the root 2 me"<<endl;
    root2 = BuildTree();

    if(isIdentitical(root1, root2)){
        cout<<"the both the tree are same or identical "<<endl;
    }
    else{
        cout<<"The both the tree are not same or identical"<<endl;
    }

    return 0;
}