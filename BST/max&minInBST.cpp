// // Max and min element in Binary Tree
// Given a Binary Tree, find maximum and minimum elements in it.

// Example 1:

// Input: 
           
// Output: 11 1
// Explanation:                           
//  The maximum and minimum element in 
// this binary tree is 11 and 1 respectively.
// Example 2:

// Input: 
//            6
//         / \
//        5   8
//       /
//      2
// Output: 8 2
// Your Task:
// You don't need to read input or print anything. Your task is to complete findMax() and findMin() functions which take root node of the tree as input parameter and return the maximum and minimum elements in the binary tree respectively.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

class Solution
{
public:
    int findMax(Node *root)
    {
        // base case\
        
        if(root == NULL){
            return -1;
        }
        
        while(root->right != NULL){
            root = root->right;
        }
    
        return root->data;
    }
    
    int findMin(Node *root)
    {
        if(root == NULL){
            return -1;
        }
        
        while(root ->left != NULL){
            root = root ->left;
        }
        return root ->data;
    }
};