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
    bool path(TreeNode *root,int targetSum,int curr)
    {
        if(root==nullptr)
            return false;
        
        curr=curr+root->val;
        
        if(root->left==nullptr and root->right==nullptr)
            return curr==targetSum;
        
        return path(root->left,targetSum,curr)||path(root->right,targetSum,curr);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return path(root,targetSum,0);
    }
};