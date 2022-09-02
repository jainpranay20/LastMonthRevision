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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
         if(root==NULL) return ans;
        int flag=0;
        while(!(q.empty()))
        {
            vector<int>v;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(flag==1)
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            else ans.push_back(v);
            flag=!(flag);
        }
        return ans;
    }
};