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
    void paths(TreeNode *root,vector<string>&ans,string curr)
    {
        if(root==nullptr)
            return;
        if(root->left==nullptr and root->right==nullptr)
        {
            curr = curr + to_string(root->val);
            ans.push_back(curr);
            return ;
        }
        curr=curr+(to_string(root->val)+"->");
        if(root->left)
        paths(root->left,ans,curr);
        if(root->right)
        paths(root->right,ans,curr);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string curr="";
        paths(root,ans,curr);
        return ans;
    }
};