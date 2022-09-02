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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        if(root==nullptr)
            return ans;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();double count=0;
            for(int i=0;i<n;i++)
            {
                TreeNode *first=q.front();
                q.pop();
                if(first->left!=NULL)
                    q.push(first->left);
                if(first->right!=NULL)
                    q.push(first->right);
                count = count+first->val;
            }
            ans.push_back(count/n);
        }
        return ans;
    }
};