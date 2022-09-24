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
    
    // understand and see this difference
    void path(TreeNode* root,int targetSum,vector<vector<int>> &ans,vector<int> res,int sum)
    {
        if(root==nullptr)
            return;
        sum=sum+root->val;
        res.push_back(root->val);
        if(root->left==nullptr and root->right==nullptr and sum==targetSum)
        {
            ans.push_back(res);
        }
        path(root->left,targetSum,ans,res,sum);
        path(root->right,targetSum,ans,res,sum);
        //res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> res;
        int sum=0;
        path(root,targetSum,ans,res,sum);
        return ans;
    }
};