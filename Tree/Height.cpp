// A binary tree's maximum depth is the number of 
// nodes along the longest path from the
//  root node down to the farthest leaf node.

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


int Height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    int ans = max(leftHeight, rightHeight)+1;
    return ans ;
}



int main(){
    Node* root=NULL;
    root = BuildTree();
    int ans = Height(root);

    cout<<ans;
}