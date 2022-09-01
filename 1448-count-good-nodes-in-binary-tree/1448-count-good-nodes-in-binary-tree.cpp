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
    int count=0;
   void ans(TreeNode *root,int res)
   {
       if(root==nullptr)
           return;
       if(root->val>=res)
       {
           count++;
           res=root->val;
       }
       ans(root->left,res);
       ans(root->right,res);
   }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int res = root->val;
        ans(root,res);
        return count;
    }
};