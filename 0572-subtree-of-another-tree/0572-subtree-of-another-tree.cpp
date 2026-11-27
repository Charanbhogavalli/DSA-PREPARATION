/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isequal(TreeNode* root,TreeNode* subroot){
     if(root==NULL && subroot==NULL){
        return true;
     }
     if(root==NULL || subroot==NULL){
        return false;
     }
     if(root->val != subroot->val){
        return false;
     }
     return isequal(root->left,subroot->left) && isequal(root->right,subroot->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) { 
    if(root==NULL){
        return false;
    }
    if(isequal(root,subRoot)){
        return true;
    }
    return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};