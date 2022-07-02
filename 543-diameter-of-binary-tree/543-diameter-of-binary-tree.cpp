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
    int height(TreeNode* root,int &diameter)
    {
        if(root==nullptr)
            return 0;
        int lh=height(root->left,diameter);
        int rh=height(root->right,diameter);
        diameter=max(diameter,lh+rh);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};


/*
int height(TreeNode *root)
    {
        if(root==nullptr)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // O(n^2 approch)
        if(root==nullptr)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        
        int maxi=max(maxi,lh+rh);
        
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        
        return maxi;
    }
*/