// pre order NLR

# include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // Constractor
    Node(int data){
  this->data= data;
  Node* left = NULL;
  Node* right = NULL;
}
};

Node* BuildTree(){
    int data;
    cout<<"Enter the data ";
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter the data "<<data<<"Left side of the tree"<<endl;
    root->left = BuildTree();
    cout<<"Enter the data "<<data<<"Right side of the tree"<<endl;
    root->right = BuildTree();
    return root;

}

void preOrder(Node* root){
    if( root == NULL){
        return;
    }

    cout<<root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);

}

int main(){
    Node* root=NULL;
   root= BuildTree();
   preOrder(root);
}