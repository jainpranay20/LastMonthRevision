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
    bool uni(TreeNode *root,int val1)
    {
        if(root==nullptr)
            return true;
       if(root->val!=val1)return false;
        return(uni(root->left,val1) && uni(root->right,val1));
        
    }
    bool isUnivalTree(TreeNode* root) {
        int n=root->val;
        return uni(root,n);
    }
};