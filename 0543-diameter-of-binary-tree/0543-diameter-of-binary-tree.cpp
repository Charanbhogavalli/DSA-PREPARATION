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
    int diameter=0;
    int dbt(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=dbt(root->left);
        int right=dbt(root->right);
        diameter=max(diameter,left+right);
        return 1+max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter=0;
        dbt(root);
        return diameter;
    }
};