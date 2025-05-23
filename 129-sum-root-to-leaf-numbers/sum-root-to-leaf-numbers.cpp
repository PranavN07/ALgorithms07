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
    int sum(TreeNode* root,int s){
        if(root == NULL){
            return 0;
        }
        if(root->left==NULL && root->right ==NULL){
            return s*10+root->val;
        }
        return sum(root->left,s*10+root->val) + sum(root->right,s*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
};