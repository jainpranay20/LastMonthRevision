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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root==nullptr)
            return NULL;
        
        queue<TreeNode*> q;
        
        if(depth==1)
        {
            TreeNode *temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        q.push(root);
        int current_depth=1;
        int flag=0;
        while(q.size())
        {
            int n=q.size();
            if(current_depth+1==depth)
                flag=1;
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(flag==1)
                {
                    TreeNode *lt=new TreeNode(val);
                    lt->left=temp->left;
                    temp->left=lt;
                    TreeNode *rt=new TreeNode(val);
                    rt->right=temp->right;
                    temp->right=rt;
                }
                else if(flag==0)
                {
                    if(temp->left)
                        q.push(temp->left);
                    if(temp->right)
                        q.push(temp->right);
                }
            }
            if(flag==1)
                break;
            current_depth++; 
        }
        return root;
    }
};