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
    int dfs(TreeNode* root){
         if(root==NULL){
            return 0;
        }
        if(root->left==NULL ){
           return dfs(root->right)+1;
        }
        if(root->right==NULL){
            return dfs(root->left)+1;
        }
        int left=dfs(root->left);
        int right=dfs(root->right);
        return min(left,right)+1;
    }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
       return dfs(root);
    }
};