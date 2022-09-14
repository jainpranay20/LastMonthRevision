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
    int helper(TreeNode* root, int count,int res)
    {
        if(root==NULL) return 0;
        count^=1<<root->val;
        if((root->left==NULL) && (root->right==NULL) &&  ((count & (count-1))==0))
        {
            res++;
            return res;
        }
        return helper(root->left,count,res)+
        helper(root->right,count,res);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int res=0;
        int count=0;
        return helper(root,count,res);
    }
};