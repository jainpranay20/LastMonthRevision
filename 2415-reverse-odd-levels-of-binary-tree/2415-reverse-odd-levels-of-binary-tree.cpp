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
TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL) return NULL;
        queue<TreeNode*>q;
        q.push(root);
        int flag=0;
        while(!q.empty())
        {
            int size=q.size();
            vector<TreeNode*>v;
            vector<int>d;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp);
                d.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(flag==1)
            {
                reverse(d.begin(),d.end());
                for(int i=0;i<v.size();i++)
                {
                    v[i]->val=d[i];
                }
            }
            flag=!flag;
        }
        return root;
    }
};