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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        // we can write in this way
        //return max(maxDepth(root->left),maxDepth(root->right))+1;
        
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        //int maxi=max(maxi,lh+rh);
        return max(lh,rh)+1;
        
        
        
        
        
    }
};