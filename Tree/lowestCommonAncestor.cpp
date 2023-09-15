// 236. Lowest Common Ancestor of a Binary Tree
// Medium

// Companies
// Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

            //       3
            //     /    \
            //    5      1
            //   / \    / \
            // 6     2  0   8
            //      /  \
            //     7     4

Node* lowestCommonAncestor(Node* root , Node* p , Node* q){
    if(root == NULL){
        return NULL;
    }

    if(root == p){
        return p;
    }

    if(root == q){
        return q;
    }

    Node* leftWala = lowestCommonAncestor(root->left , p, q);
    Node* rightWala = lowestCommonAncestor(root->right , p ,q);

    if(leftWala == NULL && rightWala == NULL){
        return NULL;
    }

    else if(leftWala !=NULL && rightWala == NULL){
        return leftWala;
    }

    else if(leftWala == NULL && rightWala != NULL){
        return rightWala;
    }
    else{
        return root;
    }

}



