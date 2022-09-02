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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans1;
        vector<int> ans;
        queue<TreeNode*> q;
        if(root==nullptr)
            return ans1;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *first=q.front();
                q.pop();
                 if(first->left!=NULL)
                    q.push(first->left);
                if(first->right!=NULL)
                    q.push(first->right);
               
                ans.push_back(first->val);
            }
            ans1.push_back(ans);
            ans.clear();
        }
        reverse(ans1.begin(),ans1.end());
        return ans1;
    }
};