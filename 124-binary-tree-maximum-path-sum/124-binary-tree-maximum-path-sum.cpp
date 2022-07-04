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
    int MaximumPathSum(TreeNode* root,int &sum)
    {
        if(root==nullptr)
            return 0;
        int lh=max(0,MaximumPathSum(root->left,sum));
        int rh=max(0,MaximumPathSum(root->right,sum));
        sum=max(sum,lh+rh+root->val);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        MaximumPathSum(root,sum);
        return sum;
    }
};