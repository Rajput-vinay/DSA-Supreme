// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

 #include<iostream>

 using namespace std;

  class Node{
    public: 
    int data;
    Node* left ;
    Node* right;

    Node(int data){
        this->data = data;
        Node* left = NULL;
        Node* right = NULL;
    }
  };

  Node* BuildTree(){
    int data ;
    cout<<"Enter the data in to the tree ";
    cin>>data;;

    
    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);
    cout<<"Enter the data "<< data <<"into the left"<<endl;
    root->left = BuildTree();
    cout<<"Enter the data "<< data <<" into the right"<<endl ;
    root->right = BuildTree();

    return root;
  }

int height(Node* root){

if(root == NULL){
    return 0;
}

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int maxi = max(leftHeight , rightHeight)+1;
   

    return maxi;
}




  int diameterOfTree(Node* root){

    if(root == NULL){
        return 0;
    }

    int opt1 = diameterOfTree(root->left);
    int opt2 = diameterOfTree(root->right);
    int opt3 = height(root->left) + height(root->right);
    opt3 = max(opt1,max(opt2,opt3));
    return opt3;

  }


  int main(){
    Node* root = NULL;
    root = BuildTree();
    int ans = diameterOfTree(root);
    cout<<ans<<" ";
  }