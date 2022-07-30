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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if(root==nullptr)
            return ans;
        st.push(root);
        while(st.size())
        {
            TreeNode *a=st.top();
            ans.push_back(a->val);
            st.pop();
            if(a->right!=NULL)
                st.push(a->right);
            if(a->left!=NULL)
                st.push(a->left);    
        }
        return ans;
    }
};