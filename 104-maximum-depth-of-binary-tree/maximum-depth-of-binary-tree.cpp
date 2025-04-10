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
    int max_depth = 0;
    int dfs(TreeNode* root,int depth){
        if(root==NULL)return depth;
        int leftdepth = dfs(root->left,depth+1);
        int rightdepth = dfs(root->right,depth +1);
        depth = max(leftdepth,rightdepth);
        max_depth = max(max_depth,depth);
        return depth;

    }
    int maxDepth(TreeNode* root) {
       dfs(root,0);
       return max_depth;
    }
};