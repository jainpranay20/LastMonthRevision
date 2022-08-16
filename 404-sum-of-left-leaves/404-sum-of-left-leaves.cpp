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
    int left(TreeNode* root,bool val1)
    {
        if(root==nullptr)
            return 0;
        if(root->left==nullptr and root->right==nullptr)
        {
            return val1?root->val:0;
        }
        int a=left(root->left,true);
        int b=left(root->right,false);
        return a+b;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = left(root,false);
        return sum;
    }
};